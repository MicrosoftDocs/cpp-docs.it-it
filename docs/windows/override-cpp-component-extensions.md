---
title: eseguire l'override (estensioni del componente C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- overriding, override keyword [C++]
- override keyword [C++]
ms.assetid: 34d19257-1686-4fcd-96f5-af07c70ba914
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6818256aafc64702e5423a5560c251e6d46750fa
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33878879"
---
# <a name="override--c-component-extensions"></a>override (Estensioni del componente C++)
Tramite la parola chiave sensibile al contesto `override` viene indicato che mediante un membro di un tipo viene eseguito l'override di una classe base o di un membro di un'interfaccia base.  
  
## <a name="remarks"></a>Note  
 Il `override` (parola chiave) è valido durante la compilazione per destinazioni native (opzione del compilatore predefinita), le destinazioni Windows Runtime (**/ZW** l'opzione del compilatore), o le destinazioni di common language runtime (**/clr** compilatore opzione).  
  
 Per ulteriori informazioni sugli identificatori di override, vedere [identificatore di override](../cpp/override-specifier.md) e [gli identificatori di Override e compilazioni Native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).  
  
 Per ulteriori informazioni sulle parole chiave sensibili al contesto, vedere [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).  
  
## <a name="examples"></a>Esempi  
 **Esempio**  
  
 Esempio di codice seguente viene illustrato che `override` può essere utilizzato anche nelle compilazioni native.  
  
```cpp#  
// override_keyword_1.cpp  
// compile with: /c  
struct I1 {  
   virtual void f();  
};  
  
struct X : public I1 {  
   virtual void f() override {}  
};  
```  
  
 **Esempio**  
  
 Esempio di codice seguente viene illustrato che `override` può essere utilizzato nelle compilazioni di Windows Runtime.  
  
```cpp#  
// override_keyword_2.cpp  
// compile with: /ZW /c  
ref struct I1 {  
   virtual void f();  
};  
  
ref struct X : public I1 {  
   virtual void f() override {}  
};  
```  
  
 **Requisiti**  
  
 Opzione del compilatore: **/ZW**  
  
 **Esempio**  
  
 Esempio di codice seguente viene illustrato che `override` può essere usato nelle compilazioni di common language runtime.  
  
```cpp#  
// override_keyword_3.cpp  
// compile with: /clr /c  
ref struct I1 {  
   virtual void f();  
};  
  
ref struct X : public I1 {  
   virtual void f() override {}  
};  
```  
  
 **Requisiti**  
  
 Opzione del compilatore: **/clr**  
  
## <a name="see-also"></a>Vedere anche  
 [Identificatore di override](../cpp/override-specifier.md)   
 [Identificatori di override](../windows/override-specifiers-cpp-component-extensions.md)