= PC操作を遠隔化する方法

PCを少し離れたところから操作したいってありますよね？しかも、操作ができればよいレベルで、レスポンスタイミングは問わない。具体的な数値で言うと、1fpsくらいで十分な感じ。そんなピンポイントな通信のニーズだとしましょう。

ん？コミュニケーションじゃない？

まあまあ。
通信の話なので。コミュニケーションです。(こじつけ

== 10m程度

10mほど離れたところにあるPCを離れたところから操作したいというニーズはありませんか？


=== 無線キーボード・マウス
まずは、少し離れて操作することを考えてみましょう。

無線キーボード、マウスの採用が第一解ですね。各社から、割と安いのが出てます。安いのはうち心地がぺなぺな立ったりしますけど、リモート操作という前には優先度が下がります。

無線化の方法は二つ。一つは、Bluetooth接続のタイプを使うという選択。もう一つは、専用のドングル(小さい（たいていUSB接続の）アンテナ)を刺すタイプ。いずれも10m程度以内の距離ならば選択肢に入ります。

問題は、20m程度の距離を無線化したい場合。20mになると、いずれも通信がきつくなってきます。

=== Miracast/HDMIコンバーター
画面を無線化するのも比較的簡単です。「HDMI　無線」とかで検索すると、送受信装置が引っかかります。HDMI端子(あるいはそれ以外のDVI端子とかも)に接続して、これまた2.4GHz帯で飛ばすやすが引っかかります。

ラグも少しありますが、2K(FullHD)や4Kにも対応するものも数千円で手に入ります。

== 20m程度
ところが、20m程度になると、一気に難しくなります。

Bluetoothも、それ以外の無線ツールも、10mぐらいを超えるととたんに届かなくなってしまいます。

「USBを無線化する」という点において、非常な困難が生じます。USBは規格的にかなり帯域の広い規格です。USB1.xで12Mbps、USB2.0では480Mbps、それ以上はもう・・・なお、本章ではUSBの規格とかには深入りしません。

そして、市販品でUSBを無線化しますなどと謳った瞬間、この要求性能をある程度保証する必要があります。大変。

そういう意味で、USBを無線化する製品というのはほとんど存在しません。KVMとかも、有線(光ファイバかCAT5以上のイーサネットケーブル)のめっちゃ高いものがいくつかあるくらいです。また、長距離伝送を謳ったキーボード・マウスも存在しないですね。HDMIコンバーターは運が良ければ届くかも？なレベルでやはり10mくらいが下内です。

=== VNCという手段

「ラグ」が気にならない用途においては、VNCという手段があります。

例えば、20m離れたところから、ちょっとした操作(アプリの起動、スタートとかレベル)をするだけなら、操作対象のPCをVNCサーバーとして、クライアントPCから操作する。その両者は無線LANでつないでおけばOKです。

無線LANならば、既存のインフラを使ってもいいですし、適当な(スタンドアロンの)無線AP/ルーターとかを流用してもいいですね。

== まとめという名の免責事項
PC操作をちょっとだけ無線化するという方法ですが、VNCって古き良きテクニックがあります。

セキュリティとかいろいろリスクがあるので、外界から切り離された環境で、あるいはそうであっても、気にすべきところはいろいろあります。

ちょっとした距離で無線化したいというときにはひとつ検討の俎上にどうぞ。