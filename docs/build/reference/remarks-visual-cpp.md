---
description: 'Altre informazioni su: &lt; osservazioni&gt;'
title: '&lt;> osservazioni (commenti sulla documentazione C++)'
ms.date: 11/04/2016
f1_keywords:
- remarks
- <remarks>
helpviewer_keywords:
- <remarks> C++ XML tag
- remarks C++ XML tag
ms.assetid: c820083b-3192-40ab-9ec8-1472c55b4247
ms.openlocfilehash: 0c919ba3101282fd755450489eacc6c0800fb437
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225219"
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

## <a name="remarks"></a>Commenti

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
