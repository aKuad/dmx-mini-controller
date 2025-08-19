> [!WARNING]
>
> ファイルパスなどの変更もせず、作った当初の状態のままです。

# DMX-MiniController

## 概要

Arduino Nano と LCD で構成された、シンプルな DMX コントローラです。

詳細な仕様に関しては、`/Reference/DMX-MiniController_Reference.pdf`を参照下さい。

## 各種ディレクトリ説明

### `DMX-MiniController_Arduino`

Arduino Nano に書き込んであるプログラムのソースコードです。

`DMX-MiniController_Arduino.ino`がメイン、その他自作関数を各ファイルに分割しています。

### `Knob`

ボリュームのツマミのデータです。

図面 (PDF) と 3D モデルデータ (STL)、イメージ画像 (PNG) を含めています。

### `Reference`

本機器の仕様等をまとめたリファレンスです。

回路図、画像等も同梱しています。
回路図の作成には KiCAD を用いており、KiCAD 用回路図データ (SCH) も同梱しています。
