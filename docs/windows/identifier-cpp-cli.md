---
title: Identifier (c + + CLI) | Microsoft Docs
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
ms.openlocfilehash: 6eac892da91c5f3640bdd243a0b3c6525faa5c2a
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39603345"
---
# <a name="identifier-ccli"></a>__identifier (C++/CLI)
Consente l'utilizzo delle parole chiave Visual C++ come identificatori.  
  
## <a name="all-platforms"></a>Tutte le piattaforme  
### <a name="syntax"></a>Sintassi  
  
```  
__identifier(  
Visual_C++_keyword  
)  
```  
  
### <a name="remarks"></a>Note  
  
Usare la **Identifier** parola chiave per gli identificatori che non sono parole chiave è consentita, ma sconsigliata per una questione di stile.  
  
## <a name="windows-runtime"></a>Windows Runtime  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: `/ZW`  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 Nell'esempio seguente, una classe denominata `template` viene creato in c# e distribuite come una DLL. Nel programma Visual C++ che usa il `template` (classe), il **Identifier** parola chiave consente di nascondere il fatto che **modello** è una parola chiave C++ standard.  
  
```cs  
// identifier_template.cs  
// compile with: /target:library  
public class template {  
   public void Run() { }  
}  
```  
  
```cpp  
// keyword__identifier.cpp  
// compile with: /ZW  
#using <identifier_template.dll>  
int main() {  
   __identifier(template)^ pTemplate = ref new __identifier(template)();  
   pTemplate->Run();  
}  
```  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
### <a name="remarks"></a>Note  
  
 Il **Identifier** parola chiave è valida con il `/clr` opzione del compilatore.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: `/clr`  
  
### <a name="examples"></a>Esempi  
  
 Nell'esempio seguente, una classe denominata `template` viene creato in c# e distribuite come una DLL. Nel programma Visual C++ che usa il `template` (classe), il **Identifier** parola chiave consente di nascondere il fatto che **modello** è una parola chiave C++ standard.  
  
```cs  
// identifier_template.cs  
// compile with: /target:library  
public class template {  
   public void Run() { }  
}  
```  
  
```cpp  
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