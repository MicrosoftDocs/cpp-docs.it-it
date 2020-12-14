---
description: 'Altre informazioni su: &lt; Returns&gt;'
title: '&lt;Restituisce> (commenti in formato documentazione C++)'
ms.date: 11/04/2016
f1_keywords:
- returns
- <returns>
helpviewer_keywords:
- returns C++ XML tag
- <returns> C++ XML tag
ms.assetid: 5e3b0ed9-838d-4953-a93e-76d2d0a19fb9
ms.openlocfilehash: c07439610fa0259a38a4c1993ead7f0f06023e5e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225050"
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

## <a name="remarks"></a>Commenti

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
