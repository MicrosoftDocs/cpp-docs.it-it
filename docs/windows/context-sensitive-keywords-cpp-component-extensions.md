---
title: Parole chiave sensibili al contesto (estensioni del componente C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- internal_CPP
dev_langs:
- C++
helpviewer_keywords:
- context-sensitive keywords
ms.assetid: e33da089-f434-44e9-8cce-4668d05a8939
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e362ec513cb7cb14f5fd3abb8a028c6e0eab616b
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39644229"
---
# <a name="context-sensitive-keywords--c-component-extensions"></a>Parole chiave sensibili al contesto (Estensioni del componente C++)
*Parole chiave sensibili al contesto* sono elementi del linguaggio riconosciuti solo in contesti specifici. All'esterno del contesto specifico, una parola chiave sensibile al contesto può essere un simbolo definito dall'utente.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
### <a name="remarks"></a>Note
  
 Di seguito è riportato un elenco di parole chiave sensibili al contesto:  
  
-   [abstract](../windows/abstract-cpp-component-extensions.md)  
  
-   [delegate](../windows/delegate-cpp-component-extensions.md)  
  
-   [event](../windows/event-cpp-component-extensions.md)  
  
-   [finally](../dotnet/finally.md)  
  
-   [for each, in](../dotnet/for-each-in.md)  
  
-   [initonly](../dotnet/initonly-cpp-cli.md)  
  
-   `internal`   
  
-   [valore letterale](../windows/literal-cpp-component-extensions.md)  
  
-   [override](../windows/override-cpp-component-extensions.md)  
  
-   [proprietà](../windows/property-cpp-component-extensions.md)  
  
-   [sealed](../windows/sealed-cpp-component-extensions.md)  
  
-   `where` (in parte [Generics](../windows/generics-cpp-component-extensions.md))  
  
 Per scopi di leggibilità, è possibile limitare l'utilizzo delle parole chiave sensibili al contesto come simboli definiti dall'utente.  
  
## <a name="windows-runtime"></a>Windows Runtime  
### <a name="remarks"></a>Note  
  
 Non esistono commenti specifici della piattaforma per questa funzionalità.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: `/ZW`  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
### <a name="remarks"></a>Note  
  
 Non esistono commenti specifici della piattaforma per questa funzionalità.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: `/clr`  
  
### <a name="examples"></a>Esempi  
  
 Esempio di codice seguente viene illustrato che nel contesto appropriato, il **proprietà** parola chiave sensibile al contesto può essere utilizzato per definire una proprietà e una variabile.  
  
```cpp  
// context_sensitive_keywords.cpp  
// compile with: /clr  
public ref class C {  
   int MyInt;  
public:  
   C() : MyInt(99) {}  
  
   property int Property_Block {   // context-sensitive keyword  
      int get() { return MyInt; }  
   }  
};  
  
int main() {  
   int property = 0;               // variable name  
   C ^ MyC = gcnew C();  
   property = MyC->Property_Block;  
   System::Console::WriteLine(++property);  
}  
```  
  
```Output  
100  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)