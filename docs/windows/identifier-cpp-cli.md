---
title: "__identifier (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__identifier"
  - "__identifier_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__identifier keyword [C++]"
ms.assetid: 348428af-afa7-4ff3-b571-acf874301cf2
caps.latest.revision: 18
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __identifier (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Abilita l'utilizzo delle parole chiave di Visual C\+\+ come identificatori.  
  
## Tutte le piattaforme  
 **Sintassi**  
  
```  
  
__identifier(  
Visual_C++_keyword  
)  
  
```  
  
 **Osservazioni**  
  
 L'utilizzo della parola chiave `__identifier` per gli identificatori che non sono parole chiave è consentito, ma è fortemente sconsigliato come stile.  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
### Esempi  
 **Esempio**  
  
 Nell'esempio seguente, una classe denominata `template` viene creata in C\# e distribuita sotto forma di DLL.  Nel programma Visual C\+\+ che utilizza la classe `template`, la parola chiave `__identifier` nasconde il fatto che `template` è una parola chiave C\+\+ standard.  
  
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
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Osservazioni**  
  
 La parola chiave `__identifier` è valida con le opzioni di compilatore **\/clr:oldSyntax** e **\/clr**.  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 Nell'esempio seguente, una classe denominata `template` viene creata in C\# e distribuita sotto forma di DLL.  Nel programma Visual C\+\+ che utilizza la classe `template`, la parola chiave `__identifier` nasconde il fatto che `template` è una parola chiave C\+\+ standard.  
  
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
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)   
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)