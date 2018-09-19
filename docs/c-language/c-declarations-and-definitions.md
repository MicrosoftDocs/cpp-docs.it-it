---
title: Dichiarazioni e definizioni C | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 575f0c9b-5554-4346-be64-b2129ca9227f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7fcb83395313609fc5c9bad673416131b2332552
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46019562"
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