---
title: Identifier (c + + CLI) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- __identifier
- __identifier_cpp
dev_langs:
- C++
helpviewer_keywords:
- __identifier keyword [C++]
ms.assetid: 348428af-afa7-4ff3-b571-acf874301cf2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a96363fcfbc753e727c6cbb6a5efbbb5606b6c40
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33877683"
---
# <a name="identifier-ccli"></a>__identifier (C++/CLI)
Consente l'utilizzo delle parole chiave di Visual C++ come identificatori.  
  
## <a name="all-platforms"></a>Tutte le piattaforme  
**Sintassi**  
  
```  
__identifier(  
Visual_C++_keyword  
)  
  
```  
  
**Note**  
  
Utilizzare il `__identifier` (parola chiave) per gli identificatori che non sono parole chiave è consentito, ma sconsigliato per motivi di stile.  
  
## <a name="windows-runtime"></a>Windows Runtime  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 Nell'esempio seguente, una classe denominata `template` viene creato in c# e distribuito come una DLL. Nel programma Visual C++ che utilizza il `template` (classe), il `__identifier` (parola chiave) consente di nascondere il fatto che `template` è una parola chiave C++ standard.  
  
```  
// identifier_template.cs  
// compile with: /target:library  
public class template {  
   public void Run() { }  
}  
```  
  
```  
// keyword__identifier.cpp  
// compile with: /ZW  
#using <identifier_template.dll>  
int main() {  
   __identifier(template)^ pTemplate = ref new __identifier(template)();  
   pTemplate->Run();  
}  
```  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 **Note**  
  
 Il `__identifier` parola chiave è valida con la **/clr** l'opzione del compilatore.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 Nell'esempio seguente, una classe denominata `template` viene creato in c# e distribuito come una DLL. Nel programma Visual C++ che utilizza il `template` (classe), il `__identifier` (parola chiave) consente di nascondere il fatto che `template` è una parola chiave C++ standard.  
  
```  
// identifier_template.cs  
// compile with: /target:library  
public class template {  
   public void Run() { }  
}  
```  
  
```  
// keyword__identifier.cpp  
// compile with: /clr  
#using <identifier_template.dll>  
  
int main() {  
   __identifier(template) ^pTemplate = gcnew __identifier(template)();  
   pTemplate->Run();  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme Runtime](../windows/component-extensions-for-runtime-platforms.md)   
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)