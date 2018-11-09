---
title: '&lt;paramref&gt; (Visual C++)'
ms.date: 11/04/2016
f1_keywords:
- paramref
- <paramref>
helpviewer_keywords:
- paramref C++ XML tag
- <paramref> C++ XML tag
ms.assetid: c5730dc2-7159-421f-b2d5-bb971e307122
ms.openlocfilehash: 32ed64bc4d76e75dc7de47f8f3bd3c7ab5823cdc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50586305"
---
# <a name="ltparamrefgt-visual-c"></a>&lt;paramref&gt; (Visual C++)

Il tag \<paramref > offre un modo per indicare che una parola è un parametro. Il file con estensione xml può essere elaborato per formattare questo parametro in modo specifico.

## <a name="syntax"></a>Sintassi

```
<paramref name="name"/>
```

#### <a name="parameters"></a>Parametri

*name*<br/>
Nome del parametro a cui fare riferimento.  Racchiudere il nome tra virgolette singole o doppie.  Il compilatore genera un avviso se non trova `name`.

## <a name="remarks"></a>Note

Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

## <a name="example"></a>Esempio

```
// xml_paramref_tag.cpp
// compile with: /clr /doc /LD
// post-build command: xdcmake xml_paramref_tag.dll
/// Text for class MyClass.
public ref class MyClass {
   /// <summary>MyMethod is a method in the MyClass class.
   /// The <paramref name="Int1"/> parameter takes a number.
   /// </summary>
   void MyMethod(int Int1) {}
};
```

## <a name="see-also"></a>Vedere anche

[Documentazione di XML](../ide/xml-documentation-visual-cpp.md)