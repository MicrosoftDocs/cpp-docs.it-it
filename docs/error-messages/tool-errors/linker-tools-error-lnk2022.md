---
title: Errore degli strumenti del linker LNK2022
ms.date: 11/04/2016
f1_keywords:
- LNK2022
helpviewer_keywords:
- LNK2022
ms.assetid: d2128c73-dde3-4b8e-a9b2-0a153acefb3b
ms.openlocfilehash: e55202274c5ec3982f784ad6cdf074a5a99e922f
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64345328"
---
# <a name="linker-tools-error-lnk2022"></a>Errore degli strumenti del linker LNK2022

> operazione di metadati non riuscita (*HRESULT*): *error_message*

Il linker ha rilevato un errore durante il merge dei metadati. Per collegare correttamente, è necessario risolvere gli errori dei metadati.

Un modo per diagnosticare questo problema consiste nell'eseguire **ildasm-token** nei file oggetto per trovare tipi di token elencati in `error_message`e cercare le differenze.  Nei metadati, due tipi diversi con lo stesso nome non è valido, anche se l'attributo LayoutType è diverso.

Un motivo per LNK2022 è quando un tipo (ad esempio, uno struct) presente in più moduli con lo stesso nome ma con le definizioni in conflitto e durante la compilazione con [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  In questo caso, assicurarsi che il tipo ha una definizione identica in tutti i moduli.  Il nome del tipo è elencato `error_message`.

È anche possibile LNK2022 quando il linker rileva un file di metadati in un percorso diverso rispetto a quello indicato al compilatore (con [#using](../../preprocessor/hash-using-directive-cpp.md) ). Assicurarsi che il file metadati (con estensione dll o netmodule), quando viene passato al linker, si trovi nello stesso percorso di quando è stato passato al compilatore.

Quando si compila un'applicazione ATL, l'utilizzo della macro `_ATL_MIXED` è obbligatorio in tutti i moduli, se viene usato in almeno uno.

## <a name="example"></a>Esempio

L'esempio seguente definisce un tipo vuoto.

```cpp
// LNK2022_a.cpp
// compile with: /clr /c
public ref class Test {};
```

## <a name="example"></a>Esempio

In questo esempio mostra che non è possibile collegare due file di codice sorgente che contengono i tipi con lo stesso nome ma di definizioni diverse.

L'esempio seguente genera l'errore LNK2022.

```cpp
// LNK2022_b.cpp
// compile with: LNK2022_a.cpp /clr /LD
// LNK2022 expected
public ref class Test {
   void func() {}
   int var;
};
```