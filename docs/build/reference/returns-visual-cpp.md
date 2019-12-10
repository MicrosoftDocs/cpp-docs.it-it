---
title: '&lt;restituisce > (C++ commenti per la documentazione)'
ms.date: 11/04/2016
f1_keywords:
- returns
- <returns>
helpviewer_keywords:
- returns C++ XML tag
- <returns> C++ XML tag
ms.assetid: 5e3b0ed9-838d-4953-a93e-76d2d0a19fb9
ms.openlocfilehash: 1315ec09271c2c97f7bcaf3fb6f9c75f514b5d2d
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988639"
---
# <a name="ltreturnsgt"></a>&lt;returns&gt;

Il tag \<returns> deve essere usato nel commento per una dichiarazione di metodo per descrivere il valore restituito.

## <a name="syntax"></a>Sintassi

```
<returns>description</returns>
```

#### <a name="parameters"></a>Parametri

*description*<br/>
Descrizione del valore restituito.

## <a name="remarks"></a>Note

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

[Documentazione di XML](xml-documentation-visual-cpp.md)
