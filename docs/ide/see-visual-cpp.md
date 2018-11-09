---
title: '&lt;see&gt; (Visual C++)'
ms.date: 11/04/2016
f1_keywords:
- <see>
- see
helpviewer_keywords:
- <see> C++ XML tag
- see C++ XML tag
ms.assetid: 20ef66f4-b278-45cf-8613-63919edf5720
ms.openlocfilehash: f5fa63f2dbd97f0a2da98a5a31a1192e40599738
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50461360"
---
# <a name="ltseegt-visual-c"></a>&lt;see&gt; (Visual C++)

Con il tag \<see> è possibile specificare un collegamento nel testo. Il tag [\<seealso>](../ide/seealso-visual-cpp.md) consente di specificare il testo da visualizzare in una sezione Vedere anche.

## <a name="syntax"></a>Sintassi

```
<see cref="member"/>
```

#### <a name="parameters"></a>Parametri

*membro*<br/>
Riferimento a un membro o a un campo disponibile per essere chiamato dall'ambiente di compilazione corrente.  Racchiudere il nome tra virgolette singole o doppie.

Il compilatore verifica l'esistenza dell'elemento di codice specificato e risolve `member` nel nome dell'elemento nel file XML di output.  Il compilatore genera un avviso se non trova `member`.

## <a name="remarks"></a>Note

Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

Per un esempio dell'uso di \<see>, vedere [\<summary>](../ide/summary-visual-cpp.md).

Il compilatore di Visual C++ tenta di risolvere i riferimenti cref in un passaggio tramite i commenti della documentazione.  Pertanto, se si utilizzano le regole di ricerca di C++, un simbolo non viene trovato dal compilatore e il riferimento verrà contrassegnato come non risolto. Per altre informazioni, vedere [\<seealso>](../ide/seealso-visual-cpp.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come generare i riferimenti cref in un tipo generico, in modo che il compilatore risolva il riferimento.

```
// xml_see_cref_example.cpp
// compile with: /LD /clr /doc
// the following cref shows how to specify the reference, such that,
// the compiler will resolve the reference
/// <see cref="C{T}">
/// </see>
ref class A {};

// the following cref shows another way to specify the reference,
// such that, the compiler will resolve the reference
/// <see cref="C < T >"/>

// the following cref shows how to hard-code the reference
/// <see cref="T:C`1">
/// </see>
ref class B {};

/// <see cref="A">
/// </see>
/// <typeparam name="T"></typeparam>
generic<class T>
ref class C {};
```

## <a name="see-also"></a>Vedere anche

[Documentazione di XML](../ide/xml-documentation-visual-cpp.md)