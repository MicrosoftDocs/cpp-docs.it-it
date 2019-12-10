---
title: valore &lt;> (C++ commenti sulla documentazione)
ms.date: 11/04/2016
f1_keywords:
- value
- <value>
helpviewer_keywords:
- value C++ XML tag
- <value> C++ XML tag
ms.assetid: 0ba0a0d5-bcd7-4862-a169-83f2721ad80e
ms.openlocfilehash: de84d1faca59a6c8e4f82fba3605cbd54a05bd2e
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988599"
---
# <a name="ltvaluegt"></a>&lt;valore&gt;

Il tag \<value> consente di descrivere una proprietà e i metodi della funzione di accesso alle proprietà. Si noti che quando si aggiunge una proprietà tramite la procedura guidata per il codice nell'ambiente di sviluppo integrato di Visual Studio verrà aggiunto un tag [ \<summary>](summary-visual-cpp.md) per la nuova proprietà. È quindi necessario aggiungere manualmente un tag \<value> per descrivere il valore rappresentato dalla proprietà.

## <a name="syntax"></a>Sintassi

```
<value>property-description</value>
```

#### <a name="parameters"></a>Parametri

*property-description*<br/>
Descrizione della proprietà.

## <a name="remarks"></a>Note

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

[Documentazione di XML](xml-documentation-visual-cpp.md)
