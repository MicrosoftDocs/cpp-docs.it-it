---
title: "Platform, default, and cli Namespaces  (C++ Component Extensions) | Microsoft Docs"
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
  - "lang"
  - "cli"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lang namespace"
  - "cli namespace"
ms.assetid: 9d38bd1e-dc78-47d1-a84b-9b4683e52c9c
caps.latest.revision: 19
caps.handback.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Platform, default, and cli Namespaces  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Uno spazio dei nomi qualifica i nomi di un elemento del linguaggio in modo che i nomi non siano in conflitto con nomi identici nel codice sorgente.  Ad esempio, un conflitto di nomi può impedire al compilatore di riconoscere [Parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).  Gli spazi dei nomi vengono utilizzati dal compilatore, ma non vengono mantenuti nell'assembly compilato.  
  
## Tutti i runtime  
 Quando si creare un progetto, in Visual C\+\+ è disponibile uno spazio dei nomi predefinito per il progetto stesso.  È possibile rinominare manualmente lo spazio dei nomi, anche se in [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] il nome del file con estensione winmd corrisponde al nome dello spazio dei nomi radice.  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 Per altre informazioni, vedere [Spazi dei nomi e visibilità del tipo \(C\+\+\/CX\)](http://msdn.microsoft.com/library/windows/apps/hh969551.aspx).  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Sintassi**  
  
```  
using namespace cli;  
```  
  
 **Note**  
  
 [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)] supporta lo spazio dei nomi `cli`.  Durante la compilazione con **\/clr**, l'istruzione `using` nella sezione relativa alla sintassi è implicita.  
  
 Nello spazio dei nomi `cli` sono presenti le funzionalità del linguaggio seguenti:  
  
-   [Arrays](../windows/arrays-cpp-component-extensions.md)  
  
-   [interior\_ptr \(C\+\+\/CLI\)](../windows/interior-ptr-cpp-cli.md)  
  
-   [pin\_ptr \(C\+\+\/CLI\)](../windows/pin-ptr-cpp-cli.md)  
  
-   [safe\_cast](../windows/safe-cast-cpp-component-extensions.md)  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 Nell'esempio di codice seguente viene illustrato che è possibile utilizzare un simbolo nello spazio dei nomi `cli` come simbolo definito dall'utente nel codice.  Tuttavia, una volta eseguita questa operazione, è necessario qualificare in modo esplicito o implicito i riferimenti all'elemento del linguaggio `cli` dello stesso nome.  
  
```  
// cli_namespace.cpp  
// compile with: /clr  
using namespace cli;  
int main() {  
   array<int> ^ MyArray = gcnew array<int>(100);  
   int array = 0;  
  
   array<int> ^ MyArray2 = gcnew array<int>(100);   // C2062  
  
   // OK  
   cli::array<int> ^ MyArray2 = gcnew cli::array<int>(100);  
   ::array<int> ^ MyArray3 = gcnew ::array<int>(100);  
}  
```  
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)