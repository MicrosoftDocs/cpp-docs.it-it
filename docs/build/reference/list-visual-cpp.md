---
title: '&lt;elenco> (commenti in formato documentazione C++)'
ms.date: 11/04/2016
f1_keywords:
- list
helpviewer_keywords:
- list C++ XML tag
- <list> C++ XML tag
ms.assetid: c792a10b-0451-422c-9aa0-604116e69d64
ms.openlocfilehash: 24f9b17c67b8f951743fd51c04266b05dad235c7
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041965"
---
# <a name="ltlistgt-and-ltlistheadergt"></a>&lt;List &gt; e &lt; listheader&gt;

Il \<listheader> blocco viene utilizzato per definire la riga di intestazione di un elenco di tabelle o definizioni. Per definire una tabella, è sufficiente specificare una voce per il termine nell'intestazione.

## <a name="syntax"></a>Sintassi

```xml
<list type="bullet" | "number" | "table">
   <listheader>
      <term>term</term>
      <description>description</description>
   </listheader>
   <item>
      <term>term</term>
      <description>description</description>
   </item>
</list>
```

#### <a name="parameters"></a>Parametri

*termine*<br/>
Termine da definire, che verrà definito in `description`.

*description*<br/>
Elemento di un elenco puntato o numerato oppure la definizione di un `term`.

## <a name="remarks"></a>Commenti

Ogni elemento nell'elenco viene specificato con un \<item> blocco. Quando si crea un elenco di definizioni, è necessario specificare sia `term` che `description`. Per le tabelle e gli elenchi puntati o numerati, tuttavia, è sufficiente fornire una voce per `description`.

Un elenco o una tabella può includere un numero di \<item> blocchi sufficiente.

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

## <a name="example"></a>Esempio

```cpp
// xml_list_tag.cpp
// compile with: /doc /LD
// post-build command: xdcmake xml_list_tag.dll
/// <remarks>Here is an example of a bulleted list:
/// <list type="bullet">
/// <item>
/// <description>Item 1.</description>
/// </item>
/// <item>
/// <description>Item 2.</description>
/// </item>
/// </list>
/// </remarks>
class MyClass {};
```

## <a name="see-also"></a>Vedere anche

[Documentazione XML](xml-documentation-visual-cpp.md)
