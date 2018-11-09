---
title: '&lt;exception&gt; (Visual C++)'
ms.date: 11/04/2016
f1_keywords:
- exception
- <exception>
helpviewer_keywords:
- <exception> C++ XML tag
- exception C++ XML tag
ms.assetid: 24451e79-9b89-4b77-98fb-702c6516b818
ms.openlocfilehash: b54a406fe0c0734a9df82f1fd4e92110198cbe98
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50529760"
---
# <a name="ltexceptiongt-visual-c"></a>&lt;exception&gt; (Visual C++)

Il tag \<exception> consente di specificare le eccezioni che possono essere generate. Questo tag viene applicato a una definizione di metodo.

## <a name="syntax"></a>Sintassi

```
<exception cref="member">description</exception>
```

#### <a name="parameters"></a>Parametri

*membro*<br/>
Riferimento ad un'eccezione disponibile dall'ambiente di compilazione corrente. Quando si usano regole di ricerca del nome, il compilatore controlla che l'eccezione specificata esista e converte `member` nel nome canonico dell'elemento nel file XML di output.  Il compilatore genera un avviso se non trova `member`.

Racchiudere il nome tra virgolette singole o doppie.

Per informazioni su come creare un riferimento cref a un tipo generico, vedere [\<see>](../ide/see-visual-cpp.md).

*description*<br/>
Descrizione.

## <a name="remarks"></a>Note

Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

Il compilatore di Visual C++ tenta di risolvere i riferimenti cref in un passaggio tramite i commenti della documentazione.  Pertanto, se si utilizzano le regole di ricerca di C++, un simbolo non viene trovato dal compilatore e il riferimento verrà contrassegnato come non risolto. Per altre informazioni, vedere [\<seealso>](../ide/seealso-visual-cpp.md).

## <a name="example"></a>Esempio

```
// xml_exception_tag.cpp
// compile with: /clr /doc /LD
// post-build command: xdcmake xml_exception_tag.dll
using namespace System;

/// Text for class EClass.
public ref class EClass : public Exception {
   // class definition ...
};

/// <exception cref="System.Exception">Thrown when... .</exception>
public ref class TestClass {
   void Test() {
      try {
      }
      catch(EClass^) {
      }
   }
};
```

## <a name="see-also"></a>Vedere anche

[Documentazione di XML](../ide/xml-documentation-visual-cpp.md)