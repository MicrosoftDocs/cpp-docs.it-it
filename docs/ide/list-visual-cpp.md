---
title: '&lt;list&gt; (Visual C++)'
ms.date: 11/04/2016
f1_keywords:
- list
- <list>
helpviewer_keywords:
- list C++ XML tag
- <list> C++ XML tag
ms.assetid: c792a10b-0451-422c-9aa0-604116e69d64
ms.openlocfilehash: 015647cd381ba4dc0c099b322e3c5870246c9fc2
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57751335"
---
# <a name="ltlistgt-visual-c"></a>&lt;list&gt; (Visual C++)

Il blocco \<listheader> viene usato per definire la riga di intestazione di una tabella o di un elenco di definizioni. Per definire una tabella, è sufficiente specificare una voce per il termine nell'intestazione.

## <a name="syntax"></a>Sintassi

```
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

*term*<br/>
Termine da definire, che verrà definito in `description`.

*description*<br/>
Elemento di un elenco puntato o numerato oppure la definizione di un `term`.

## <a name="remarks"></a>Osservazioni

Ogni elemento dell'elenco viene specificato tramite un blocco \<item>. Quando si crea un elenco di definizioni, è necessario specificare sia `term` che `description`. Per le tabelle e gli elenchi puntati o numerati, tuttavia, è sufficiente fornire una voce per `description`.

Gli elenchi e le tabelle possono contenere un numero qualsiasi di blocchi \<item>.

Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

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

[Documentazione di XML](../ide/xml-documentation-visual-cpp.md)
