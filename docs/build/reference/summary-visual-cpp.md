---
description: 'Altre informazioni su: &lt; Riepilogo&gt;'
title: '&lt;Riepilogo> (commenti in formato documentazione C++)'
ms.date: 11/04/2016
f1_keywords:
- <summary>
helpviewer_keywords:
- <summary> C++ XML tag
- summary C++ XML tag
ms.assetid: cdeeefbb-1339-45d6-9002-10042a9a2726
ms.openlocfilehash: 3003a3226a67d864be1a07a47151e7003c5514a4
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126338"
---
# <a name="ltsummarygt"></a>&lt;summary&gt;

Il \<summary> tag deve essere usato per descrivere un tipo o un membro del tipo. Utilizzare [\<remarks>](remarks-visual-cpp.md) per aggiungere informazioni aggiuntive a una descrizione del tipo.

## <a name="syntax"></a>Sintassi

```
<summary>description</summary>
```

#### <a name="parameters"></a>Parametri

*description*<br/>
Un riepilogo dell'oggetto.

## <a name="remarks"></a>Osservazioni

Il testo per il \<summary> tag è l'unica fonte di informazioni sul tipo in IntelliSense e viene visualizzato anche nell' [Visualizzatore oggetti](/visualstudio/ide/viewing-the-structure-of-code) e nel report Web sui commenti del codice.

Compilare con [/doc](doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.

## <a name="example"></a>Esempio

```cpp
// xml_summary_tag.cpp
// compile with: /LD /clr /doc
// post-build command: xdcmake xml_summary_tag.dll

/// Text for class MyClass.
public ref class MyClass {
public:
   /// <summary>MyMethod is a method in the MyClass class.
   /// <para>Here's how you could make a second paragraph in a description. <see cref="System::Console::WriteLine"/> for information about output statements.</para>
   /// <seealso cref="MyClass::MyMethod2"/>
   /// </summary>
   void MyMethod(int Int1) {}

   /// text
   void MyMethod2() {}
};
```

## <a name="see-also"></a>Vedere anche

[Documentazione XML](xml-documentation-visual-cpp.md)
