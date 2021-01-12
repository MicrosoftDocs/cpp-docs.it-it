---
description: 'Altre informazioni su: &lt; vedere&gt;'
title: '&lt;vedere> (commenti in formato documentazione C++)'
ms.date: 11/04/2016
f1_keywords:
- <see>
helpviewer_keywords:
- <see> C++ XML tag
- see C++ XML tag
ms.assetid: 20ef66f4-b278-45cf-8613-63919edf5720
ms.openlocfilehash: c1de0ec23854d159d661cd1b62df97169eab7317
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126221"
---
# <a name="ltseegt"></a>&lt;see&gt;

Il \<see> tag consente di specificare un collegamento dall'interno del testo. Usare [\<seealso>](seealso-visual-cpp.md) per indicare il testo che potrebbe essere necessario visualizzare in una sezione vedere anche.

## <a name="syntax"></a>Sintassi

```
<see cref="member"/>
```

#### <a name="parameters"></a>Parametri

*membro*<br/>
Riferimento a un membro o a un campo disponibile per essere chiamato dall'ambiente di compilazione corrente.  Racchiudere il nome tra virgolette singole o doppie.

Il compilatore verifica l'esistenza dell'elemento di codice specificato e risolve `member` nel nome dell'elemento nel file XML di output.  Il compilatore genera un avviso se non trova `member`.

## <a name="remarks"></a>Osservazioni

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

[\<summary>](summary-visual-cpp.md)Per un esempio dell'utilizzo di \<see> , vedere.

Il compilatore MSVC tenterà di risolvere i riferimenti CREF in un passaggio attraverso i commenti della documentazione.  Pertanto, se si utilizzano le regole di ricerca di C++, un simbolo non viene trovato dal compilatore e il riferimento verrà contrassegnato come non risolto. [\<seealso>](seealso-visual-cpp.md)Per ulteriori informazioni, vedere.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come generare i riferimenti cref in un tipo generico, in modo che il compilatore risolva il riferimento.

```cpp
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

[Documentazione XML](xml-documentation-visual-cpp.md)
