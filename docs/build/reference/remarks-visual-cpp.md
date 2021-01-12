---
description: 'Altre informazioni su: &lt; osservazioni&gt;'
title: '&lt;> osservazioni (commenti sulla documentazione C++)'
ms.date: 11/04/2016
f1_keywords:
- <remarks>
helpviewer_keywords:
- <remarks> C++ XML tag
- remarks C++ XML tag
ms.assetid: c820083b-3192-40ab-9ec8-1472c55b4247
ms.openlocfilehash: 3e3590bff827606ad38f3772b72fa4e79563c2e1
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126091"
---
# <a name="ltremarksgt"></a>&lt;remarks&gt;

Il \<remarks> tag viene usato per aggiungere informazioni su un tipo, integrando le informazioni specificate con [\<summary>](summary-visual-cpp.md) . Queste informazioni vengono visualizzate in [Visualizzatore oggetti](/visualstudio/ide/viewing-the-structure-of-code) e nel report Web sui commenti del codice.

## <a name="syntax"></a>Sintassi

```
<remarks>description</remarks>
```

#### <a name="parameters"></a>Parametri

*description*<br/>
Descrizione del membro.

## <a name="remarks"></a>Osservazioni

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

[Documentazione XML](xml-documentation-visual-cpp.md)
