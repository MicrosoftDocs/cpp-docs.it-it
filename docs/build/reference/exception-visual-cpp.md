---
title: '&lt;> di eccezione (commenti sulla documentazione C++)'
ms.date: 11/04/2016
helpviewer_keywords:
- <exception> C++ XML tag
- exception C++ XML tag
ms.assetid: 24451e79-9b89-4b77-98fb-702c6516b818
ms.openlocfilehash: 7e4b2276ecf5f4f4c4c05b389eb98a0f572f8027
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90042108"
---
# <a name="ltexceptiongt-tag"></a>&lt;&gt;tag Exception

Il \<exception> tag consente di specificare le eccezioni che possono essere generate. Questo tag viene applicato a una definizione di metodo.

## <a name="syntax"></a>Sintassi

```
<exception cref="member">description</exception>
```

#### <a name="parameters"></a>Parametri

*membro*<br/>
Riferimento ad un'eccezione disponibile dall'ambiente di compilazione corrente. Quando si usano regole di ricerca del nome, il compilatore controlla che l'eccezione specificata esista e converte `member` nel nome canonico dell'elemento nel file XML di output.  Il compilatore genera un avviso se non trova `member`.

Racchiudere il nome tra virgolette singole o doppie.

Per informazioni su come creare un riferimento cref a un tipo generico, vedere [\<see>](see-visual-cpp.md) .

*description*<br/>
Una descrizione.

## <a name="remarks"></a>Commenti

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

Il compilatore MSVC tenterà di risolvere i riferimenti CREF in un passaggio attraverso i commenti della documentazione.  Pertanto, se si utilizzano le regole di ricerca di C++, un simbolo non viene trovato dal compilatore e il riferimento verrà contrassegnato come non risolto. [\<seealso>](seealso-visual-cpp.md)Per ulteriori informazioni, vedere.

## <a name="example"></a>Esempio

```cpp
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

[Documentazione XML](xml-documentation-visual-cpp.md)
