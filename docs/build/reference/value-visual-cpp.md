---
description: 'Altre informazioni su: &lt; valore&gt;'
title: '&lt;valore> (commenti sulla documentazione C++)'
ms.date: 11/04/2016
f1_keywords:
- <value>
helpviewer_keywords:
- value C++ XML tag
- <value> C++ XML tag
ms.assetid: 0ba0a0d5-bcd7-4862-a169-83f2721ad80e
ms.openlocfilehash: 5ebab554a33ff0d90b9306f3aec56b2552e18c5a
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126325"
---
# <a name="ltvaluegt"></a>&lt;value&gt;

Il \<value> tag consente di descrivere i metodi delle funzioni di accesso a proprietà e proprietà. Si noti che quando si aggiunge una proprietà con una creazione guidata codice in Visual Studio Integrated Development Environment, verrà aggiunto un [\<summary>](summary-visual-cpp.md) tag per la nuova proprietà. È quindi necessario aggiungere manualmente un \<value> tag per descrivere il valore rappresentato dalla proprietà.

## <a name="syntax"></a>Sintassi

```
<value>property-description</value>
```

#### <a name="parameters"></a>Parametri

*property-description*<br/>
Descrizione della proprietà.

## <a name="remarks"></a>Osservazioni

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

## <a name="example"></a>Esempio

```cpp
// xml_value_tag.cpp
// compile with: /LD /clr /doc
// post-build command: xdcmake xml_value_tag.dll
using namespace System;
/// Text for class Employee.
public ref class Employee {
private:
   String ^ name;
   /// <value>Name accesses the value of the name data member</value>
public:
   property String ^ Name {
      String ^ get() {
         return name;
      }
      void set(String ^ i) {
         name = i;
      }
   }
};
```

## <a name="see-also"></a>Vedere anche

[Documentazione XML](xml-documentation-visual-cpp.md)
