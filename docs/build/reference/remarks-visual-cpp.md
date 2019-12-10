---
title: '> osservazioni &lt;(C++ commenti sulla documentazione)'
ms.date: 11/04/2016
f1_keywords:
- remarks
- <remarks>
helpviewer_keywords:
- <remarks> C++ XML tag
- remarks C++ XML tag
ms.assetid: c820083b-3192-40ab-9ec8-1472c55b4247
ms.openlocfilehash: 096280526b12feff33377a705f7c03548a1f0f13
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988658"
---
# <a name="ltremarksgt"></a>&lt;remarks&gt;

Il tag \<remarks> viene usato per aggiungere informazioni su un tipo, integrando le informazioni con [\<summary>](summary-visual-cpp.md). Queste informazioni vengono visualizzate in [Visualizzatore oggetti](/visualstudio/ide/viewing-the-structure-of-code) e nel report Web sui commenti del codice.

## <a name="syntax"></a>Sintassi

```
<remarks>description</remarks>
```

#### <a name="parameters"></a>Parametri

*description*<br/>
Descrizione del membro.

## <a name="remarks"></a>Note

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

## <a name="example"></a>Esempio

```cpp
// xml_remarks_tag.cpp
// compile with: /LD /clr /doc
// post-build command: xdcmake xml_remarks_tag.dll

using namespace System;

/// <summary>
/// You may have some primary information about this class.
/// </summary>
/// <remarks>
/// You may have some additional information about this class.
/// </remarks>
public ref class MyClass {};
```

## <a name="see-also"></a>Vedere anche

[Documentazione di XML](xml-documentation-visual-cpp.md)
