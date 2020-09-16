---
title: Errore degli strumenti del linker LNK2022
ms.date: 11/04/2016
f1_keywords:
- LNK2022
helpviewer_keywords:
- LNK2022
ms.assetid: d2128c73-dde3-4b8e-a9b2-0a153acefb3b
ms.openlocfilehash: 187a63cb4bd22fc5e0d35523d97f438ba56b8576
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90686358"
---
# <a name="linker-tools-error-lnk2022"></a>Errore degli strumenti del linker LNK2022

> operazione sui metadati non riuscita (*HRESULT*): *ERROR_MESSAGE*

Il linker ha rilevato un errore durante l'Unione dei metadati. Per eseguire correttamente il collegamento, è necessario risolvere gli errori relativi ai metadati.

Un modo per diagnosticare questo problema consiste nell'eseguire **Ildasm-Tokens** nei file oggetto per individuare i tipi in cui sono elencati i token e individuare le `error_message` differenze.  Nei metadati, due tipi diversi con lo stesso nome non sono validi, anche se l'attributo just LayoutType è diverso.

Un motivo per LNK2022 è quando un tipo, ad esempio uno struct, esiste in più moduli con lo stesso nome, ma con definizioni in conflitto e quando si esegue la compilazione con [/CLR](../../build/reference/clr-common-language-runtime-compilation.md).  In questo caso, assicurarsi che il tipo abbia una definizione identica in tutti moduli.  Il nome del tipo è elencato in `error_message` .

Un'altra possibile provocazione di LNK2022 è quando il linker trova un file di metadati in un percorso diverso rispetto a quello specificato nel compilatore (con [#using](../../preprocessor/hash-using-directive-cpp.md) ). Assicurarsi che il file metadati (con estensione dll o netmodule), quando viene passato al linker, si trovi nello stesso percorso di quando è stato passato al compilatore.

Quando si compila un'applicazione ATL, l'uso della macro `_ATL_MIXED` è obbligatorio in tutti moduli, se usato in almeno uno.

## <a name="examples"></a>Esempi

Nell'esempio seguente viene definito un tipo vuoto.

```cpp
// LNK2022_a.cpp
// compile with: /clr /c
public ref class Test {};
```

Questo esempio mostra che non è possibile collegare due file di codice sorgente che contengono tipi con lo stesso nome ma definizioni diverse.

L'esempio seguente genera l'LNK2022.

```cpp
// LNK2022_b.cpp
// compile with: LNK2022_a.cpp /clr /LD
// LNK2022 expected
public ref class Test {
   void func() {}
   int var;
};
```
