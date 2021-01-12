---
description: 'Altre informazioni su: &lt; Returns&gt;'
title: '&lt;Restituisce> (commenti in formato documentazione C++)'
ms.date: 11/04/2016
f1_keywords:
- <returns>
helpviewer_keywords:
- returns C++ XML tag
- <returns> C++ XML tag
ms.assetid: 5e3b0ed9-838d-4953-a93e-76d2d0a19fb9
ms.openlocfilehash: 59b9a7d33a3b2695a2a5e22fdac465f17c915492
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126117"
---
# <a name="ltreturnsgt"></a>&lt;returns&gt;

Il \<returns> tag deve essere usato nel commento per una dichiarazione di metodo per descrivere il valore restituito.

## <a name="syntax"></a>Sintassi

```
<returns>description</returns>
```

#### <a name="parameters"></a>Parametri

*description*<br/>
Descrizione del valore restituito.

## <a name="remarks"></a>Osservazioni

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

## <a name="example"></a>Esempio

```cpp
// xml_returns_tag.cpp
// compile with: /LD /clr /doc
// post-build command: xdcmake xml_returns_tag.dll

/// Text for class MyClass.
public ref class MyClass {
public:
   /// <returns>Returns zero.</returns>
   int GetZero() { return 0; }
};
```

## <a name="see-also"></a>Vedere anche

[Documentazione XML](xml-documentation-visual-cpp.md)
