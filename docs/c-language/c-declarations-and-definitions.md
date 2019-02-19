---
title: Dichiarazioni e definizioni C
ms.date: 11/04/2016
ms.assetid: 575f0c9b-5554-4346-be64-b2129ca9227f
ms.openlocfilehash: 3be9cd72e9f4dbad4d279cc1bb65dfb92a61cd42
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56150519"
---
# <a name="c-declarations-and-definitions"></a>Dichiarazioni e definizioni C

"Dichiarazione" stabilisce un'associazione tra una variabile, una funzione o un tipo specifico e i relativi attributi. La sezione [Cenni preliminari sulle dichiarazioni](../c-language/overview-of-declarations.md) descrive la sintassi ANSI per `declaration` non terminale. Una dichiarazione specifica inoltre dove e quando è possibile accedere a un identificatore ("collegamento" di un identificatore). Per informazioni sul collegamento, vedere [Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md).

Una "definizione" di una variabile stabilisce le stesse associazioni di una dichiarazione ma determina anche l'allocazione dell'archiviazione per la variabile.

Ad esempio, le funzioni `main`, `find` e `count` e le variabili `var` `val` sono definite in un file di origine, nel seguente ordine:

```
int main() {}

int var = 0;
double val[MAXVAL];
char find( fileptr ) {}
int count( double f ) {}
```

Le variabili `var` e `val` possono essere utilizzate nelle funzioni `find` e `count` ; non sono necessarie ulteriori dichiarazioni. Ma questi nomi non sono visibili (non è possibile accedervi) in `main`.

## <a name="see-also"></a>Vedere anche

[File e programmi di origine](../c-language/source-files-and-source-programs.md)
