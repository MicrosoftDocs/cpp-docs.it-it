---
title: '&lt;> paramref (commenti sulla documentazione C++)'
description: Altre informazioni sul tag della documentazione XML di paramref C++.
ms.date: 11/04/2016
f1_keywords:
- <paramref>
helpviewer_keywords:
- paramref C++ XML tag
- <paramref> C++ XML tag
ms.assetid: c5730dc2-7159-421f-b2d5-bb971e307122
ms.openlocfilehash: 393703e7816368fb80f71d962dc190a0db1cea03
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126156"
---
# <a name="ltparamrefgt"></a>&lt;paramref&gt;

Il \<paramref> tag consente di indicare che una parola è un parametro. Il file con estensione xml può essere elaborato per formattare questo parametro in modo specifico.

## <a name="syntax"></a>Sintassi

```
<paramref name="name"/>
```

#### <a name="parameters"></a>Parametri

*nome*<br/>
Nome del parametro a cui fare riferimento.  Racchiudere il nome tra virgolette singole o doppie.  Il compilatore genera un avviso se non trova `name`.

## <a name="remarks"></a>Osservazioni

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

## <a name="example"></a>Esempio

```cpp
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

[Documentazione XML](xml-documentation-visual-cpp.md)
