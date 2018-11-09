---
title: '&lt;returns&gt; (Visual C++)'
ms.date: 11/04/2016
f1_keywords:
- returns
- <returns>
helpviewer_keywords:
- returns C++ XML tag
- <returns> C++ XML tag
ms.assetid: 5e3b0ed9-838d-4953-a93e-76d2d0a19fb9
ms.openlocfilehash: 2ed21b1a7b0bca12185e054b3b5452e0bf04d4d7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50494510"
---
# <a name="ltreturnsgt-visual-c"></a>&lt;returns&gt; (Visual C++)

Il tag \<returns> deve essere usato nel commento per una dichiarazione di metodo per descrivere il valore restituito.

## <a name="syntax"></a>Sintassi

```
<returns>description</returns>
```

#### <a name="parameters"></a>Parametri

*description*<br/>
Descrizione del valore restituito.

## <a name="remarks"></a>Note

Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

## <a name="example"></a>Esempio

```
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

[Documentazione di XML](../ide/xml-documentation-visual-cpp.md)