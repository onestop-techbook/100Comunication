= 会議を15分で終わらせるコニュニケーション術

== はじめに

私の会議は短い。15分で終わらせて
参加者に「あれ？もう終わり？」と驚かれることも多い。
しかし、決まるべきことが決まったのだから早く終わることに何か問題があろうか？いやない。

本ドキュメントでは15分で会議を終わらせるための
準備、ファシリテーション術を伝授する。
おそらく読むのに10分もかからない。
そして、このドキュメント読むことで、読者の会議時間は15分程度になるだろう@<fn>{kouka}。

//footnote[kouka][効果には個人差があります]

== 生涯で浮く時間
プライベートでも寸暇を惜しんで技術書を読んだり、ツイッターしたり、コードを書いたり、ツイッターしたりしている皆さんのことだから「10分もかけて本当にこのドキュメントを読む価値があるのか」と疑問に思っている人も多いだろう。

よろしい。では、得られる恩恵についてざっくりと計算してみよう。
さきほどは勢い余って「15分程度」とイキってしまったが、まぁ、「平均として30分になる」と仮定してみよう。
さっきググったところ、一般的な会議は約70分らしい@<fn>{konkyo_kiji}。すなわち、一回あたり平均40分の時間が浮くことになる。
月に開催される会議の回数を仮に3回としよう。
さらに読者が定年するまでに40年@<fn>{teinen}あると仮定する。
つまり、この本を読むことで「40分 x 3回 x 12ヶ月 x 40年= 960時間」
の会議時間が浮くことになる。

このドキュメントを10分足らずかけて読んで得られる時間は960時間だ。
十分読む価値はあるだろう。

//footnote[konkyo_kiji][この記事にそうかいてあった https://www.jrta.co.jp/research/person_vol14.pdf]
//footnote[teinen][あなたの定年は75歳〜80歳だろう。]

== 本ドキュメントにおける「会議」の定義
まず、本ドキュメントにおける「会議」を定義しておきたい。
会議にはおおまかにいって以下の3種類がある。

 1. 情報を共有する会議
 2. みんなでブレストする会議
 3. 決めるべきことを決める会議


定例報告に代表される1番目の「情報を共有する会議」は対象ではない@<fn>{teirei}。
また、2番目の「何していいかわかんねぇから、とりあえず、みんなでブレストしようぜ！」的に開催される会議も本ドキュメントの対象ではない。

本ドキュメントで扱う会議は3番目の「決めるべきことを決める」会議だ。
関係者をあつめて、認識を合わせた上で決めるべきことを決める会議。
ここで取り上げるのは、このような会議を15分で終わらせるためのコミュニケーション術であることを念頭においていただきたい。

//footnote[teirei][そもそもこれだけITツールが発達した中で情報共有するためだけに会議を開く必要があるのか？という話もあるが、それについて論じるのはまたべつの機会にしよう]

== 会議の最初で9割決まる

本ドキュメントで一番言いたいことはこの節である。
他の節で書かれていることは忘れてしまってもいいので、
この節にかかれていることだけは忘れず実践してほしい。

それは会議の最初に以下をやることだ。

 * 会議のゴールを共有する
 * 会議のアジェンダを共有する

このドキュメントではアジェンダとは「議題の順番」という意味で考えてほしい。
必要なのはこの2つだけだ。
単にこれだけのことなのだが、これがない会議がひじょーーーーーーーに多い、というのが私の印象だ。
これがないために、会議は迷走し、決めるべきことが決まらず、無駄に時間だけが過ぎていく。

解説のため、ここではとあるIoT機器を販売している会社の会議を想定しよう。
このIoT機器はアプリを使ってコントロール可能で、
このようなアプリを誰でも開発できるようにSDKが公開されている。
この「自社IoT製品向けアプリの開発者に向けたブログ立ち上げ」が議題だ。
妙に細かい設定だが、実際に私が経験した話だからだ。

具体的にエンジニアブログを立ち上げるため、
プロジェクトリーダー(以下リーダー)は
マーケ担当者(マーケ)とエンジニア二人を会議に読んだ。
会議が行われる背景については説明資料が準備されており、
ブログ立ち上げが決定した経緯については共有している。

最悪なのは
「さて、どうしましょうか？」から始まる会議だ。
その場合、会議がどうなるか見てみよう

: エンジニアA
//embed[latex]{
\vspace{-1.5\Cvs}
//}

「Qiitaでやります？それともマーケがやってるブログをつかうんでしょうか？あるいは別途ブログ立ち上げるんですか？」

: マーケ
//embed[latex]{
\vspace{-1.5\Cvs}
//}

「Qiitaに自社のIoT機器販売ページのリンクはっていいのだっけ？」

: エンジニアA
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「どうなんでしょう？規約的にはだめじゃないかな。」

: エンジニアB
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「自分たちでブログ立ち上げるのだとすると、今だと何がいいのだろう？wordpressじゃないよね」

: エンジニアA
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「GatsbyとNetlifyとか？」

: エンジニアB
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「これって予算どれくらいなんです？」

: リーダー
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「予算は100万円くらいとってある。けど、そんなにいらないよね。」

: マーケ
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「ところで、記事はどれくらいの頻度でだせそうですかねぇ」

: エンジニアA
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「んー。ネタによりますねぇ。」

: エンジニアB
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「実際自分たちでアプリを作るのかな。Githubでソース公開もする？」

: マーケ
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「いいですね。ツイッターも活用したいなぁ。」

//blankline

こんな感じになるだろう。
まず、自分の興味あることを思いつくままにしゃべっているだけで、何も決まらないまま次々と話題が移ってしまっている。

なぜ、こうなるのか。
理由は以下の2つ。

 * 何を議論すればいいのかわからない。
 * 自分が話したいことをいつ話すべきかわからない。

何を議論すればいいのかわからないので、それぞれが思いついたことや自分にとって興味あることを口にする。
さらに、それらを話すべきタイミングもわからないので、会話の流れで関係ありそうな話題になったタイミングで差し挟む。
あるいは、「ところで、記事の頻度は？」といった形で、流れをぶった切ってでも自分の興味ある話題を差し挟むことになる。


これを防ぐためには会議の最初に、会議のゴールとアジェンダ（議題の順番）を参加者全員で共有することが必要だ。
例えばこんな感じだ。

「今日の会議のゴールは以下になります。

 * 記事内容の方針決定
 * ブログの外部・内部の決定
 * タスク、課題の洗い出し

"記事内容の方針決定"では
エンジニアブログの狙いを達成するために、どういう内容の記事を、どのくらいの頻度で出していくか、といったことを決めたいです。

次にその内容でブログを書いていくとすると、
自社でブログシステムを立ち上がるのがいいのか、
外部のブログサービスを使うのか、といったあたりを決めたいです。
具体的なブログシステムあるいはブログサービスまでは必ずしも今日、決めなくてもよいです。

最後にブログを立ち上げるまでのタスク、課題の洗い出しをしたいです。
今日は、具体的なタスクの内容や課題の解決策の話まではしなくてよいです。
それは次回までの宿題として各担当者に割り振ります。

話す順番は以下になります。

 1. エンジニアブログに期待することの説明
 2. 記事内容の方針
 3. ブログ内製化または外部ブログを決定
 4. タスク、課題の洗い出し

『議題の順番を変えたい』とか『この話も議題に加えたい』
といった希望はありますか？

ないようなら、これで進めさせていただきます。
では、まずは、私からエンジニアブログに期待することを説明します。」

といった感じである。

ここまで、最初に説明しておけば、どの議論に集中すればいいかわかるので、
無駄な議論に深入りする可能性は低くなる。
また、参加メンバーそれぞれが気になっている話題をどのタイミングで話せるかわかるので、途中で話題を差し挟む可能性も低くなる。
結果、何も決まらないまま話が次々と移り、議論が迷走する確率は低くなる。

また、今回の例であれば、アジェンダを共有した時点で
次のような提案がくるかもしれない。

「"ブログの内製化または外部ブログを決定"のところで、ツイッターやGithubなど
SNSを利用するのかどうかについてもあわせて議論したいです。
それによって、ブログに求められる要件もかわってくると思うので」

このように、メンバーが話したいことをアジェンダに加えることもできる。
そうすれば「いつあの話をすればいいのだろう」といった不安を抱える必要もない。

== ファシリテーターの腕の見せ所

さきに「議論が迷走する確率は低くなる。」と書いた。
「確率が低くなる」とやや弱気な表現にしたのは、理由がある。
最初にゴールとアジェンダを共有するだけではだめなのだ。
そのときにはわかったつもりでも、議論しているうちに気づけば、ゴールに関係ない話をしてしまいがちだからだ。
そこを上手くコントロールするのがファシリテーターの腕の見せ所だ。

例えば、こんな感じだ。

: エンジニアB
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「ブログ立ち上げるなら今だと何がいいのだろう？WordPressじゃないよね」

: エンジニアA
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「GatsbyとNetlifyとか？」

: ファシリテーター
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「そのあたりは気になると思いますが、まず外部か内部かを先に決めましょう。」

//blankline

: エンジニアA
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「文章レビューは何人ぐらいでやるのだろう？有志かなぁ。それともタスクとして割り振るのかなぁ。」

: エンジニアB
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「そういえば、記事はどこで管理するのだろう。Markdownで書いてGithubとかかなぁ？」

: ファシリテーター
//embed[latex]{
\vspace{-1.5\Cvs}
//}
「そこは気になりますが、今日はタスクとしてピックアップするにとどめましょう。議論をブログの内製化、外部化の決定にもどしますね」

//blankline

例え、最初に会議の目的とアジェンダを共有したとしても、
こんな感じで、議論は脱線しようとする。
そこで、ファシリテーターが適切にコントロールすることが大切なのだ。

タイトルに「コミュニケーション術」と大層な表現をしたが、いいたいことは以上だ。
要するに「最初にゴールと順番を決めて、脱線したら話を戻しましょう。」というだけだ。
誰でもできるのでもしやっていないならばぜひ、実践してほしい。

== 下っ端は関係ない？
ここまで読んで、
「ボク、新卒の下っ端なんで会議を開催したり、ファシリテートすることはないから関係ないや」
という感想をもった人もいるかも知れない。

ちょっとまってほしい。
もし、会議の目的やアジェンダの共有がないまま
「さて、どうしましょう」から会議が始まったのなら、
そんなあなたに是非実践してほしい技がある。
これは下っ端だからこそできる技なのだ。
この技はベテランや中堅どころがやるには心理的障壁があって実践するのはむずかしい。
何もわかっていない下っ端だからこそできる技なのだ。

その技とは「さて、どうしましょう」のあとにすかさず、

「すみません。僕よくわかってないのですが、この会議のゴールってなんでしょう？何がきまればいいのでしょうか？」

と聞くことだ。

そうすると、会議の開催者はきっと、何もわかってないあなたのために何らか答えてくれるだろう。
これはベテランや中堅にはやりづらい。「おまえそんなこともわかんないのかよ」みたいに思われるのがいやだからだ。

さらにあなたが図太い精神の持ち主なら

「アジェンダ決めませんか？」

と切り出してみよう。
下っ端くんからこのような問いかけが来たら、会議の主催者は嫌でもこの会議のゴールとアジェンダを言語化せざるを得なくなる。

そして、これが大切なのだが、「さて、どうしましょう」から
始まるすべての会議で、しつこくこの技をくりかえすのだ。
そのうち、会議の開催者は
「次の会議は、あいつに『ゴールはなんですか？』
ときかれないように、予め準備しておこう。」

と思うはずだ。

少なくとも、私が実践してきた結果、そのようになった。
あなたもめげずに何もわかっていないフリを続けて、この技を繰り出し続けてほしい。

== 最後に
ここまで読んでもらって申し訳ないが、この文章を書いたモチベーションは
私のルサンチマンだ。

「なぜ、こんなこときめるだけなのにこんなに時間がかかるのだ？」

「おい、さっきの議題の結論でてないのに、別の話になってしまってるじゃないか」

「この会議一体なんのためにあるのだ？」

といったフラストレーションが溜まることが多いので、
そのような会議を世の中から撲滅するために書いた。

あなたのまわりでもこのような不毛な会議が1秒でも短くなることを祈っている。

