---
title: "Type Forwarding (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "type forwarding, Visual C++"
ms.assetid: ae730b69-0c27-41cc-84e1-3132783866ea
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Type Forwarding (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

*Inoltro dei tipi* consente di immettere un tipo da un assembly \(assembly A\) in un altro assembly \(assembly B\), in modo che, non è necessario ricompilare i client che utilizzano l'assembly A.  
  
## Tutte le piattaforme  
 Questa funzionalità non è supportata in tutti i runtime.  
  
## Windows Runtime  
 Questa funzionalità non è supportata in [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## Common Language Runtime  
 L'esempio di codice riportato di seguito mostra come utilizzare l'inoltro dei tipi.  
  
### Sintassi  
  
```  
#using "new.dll"  
[assembly:TypeForwardedTo(type::typeid)];  
```  
  
### Parametri  
 `new`  
 L'assembly in cui si sta spostando la definizione di tipo.  
  
 `type`  
 Il tipo di cui si desidera spostare la definizione in un altro assembly.  
  
### Osservazioni  
 Dopo che un componente \(assembly\) carica e viene usato dalle applicazioni client, è possibile utilizzare l'inoltro di tipi per spostare un tipo dal componente \(assembly\) in un altro assembly, caricare il componente aggiornato \(e ogni assembly aggiuntivo richiesto\) e le applicazioni client continueranno a funzionare senza essere ricompilate.  
  
 L'inoltro di tipo funziona solo per i componenti a cui fanno riferimento le applicazioni esistenti.  Quando si ricompila un'applicazione, è necessario che i riferimenti assembly appropriati per i tipi utilizzati nell'applicazione siano presenti.  
  
 Nell'inoltro di un tipo \(Tipo A\) da un assembly, è necessario aggiungere l'attributo `TypeForwardedTo` per quel tipo nonché un riferimento a un assembly.  L'assembly referenziato deve contenere una delle seguenti:  
  
-   La definizione per il tipo A.  
  
-   Un attributo `TypeForwardedTo` per tipo A nonché un riferimento a un assembly.  
  
 Esempi di tipi che possono essere inoltrati inclusi:  
  
-   classi di ref  
  
-   classi di valore  
  
-   enum  
  
-   interfacce  
  
 Non è possibile inoltrare i seguenti tipi:  
  
-   Tipi generici  
  
-   Tipi nativi  
  
-   Tipi annidati \(se si desidera inoltrare un tipo annidato, è necessario inoltrare il tipo di inclusione\)  
  
 È possibile inoltrare un tipo a un assembly creato in un qualsiasi linguaggio che punta al Common Language Runtime.  
  
 Pertanto, se un file di codice sorgente che viene utilizzato per compilare l'assembly A.dll contiene una definizione di tipo \(`ref class MyClass`\) e si desidera spostare quella definizione di tipo in B.dll assembly, bisogna:  
  
1.  Spostare la definizione di tipo `MyClass` in un file di codice sorgente utilizzato per compilare B.dll.  
  
2.  Compilare l'assembly B.dll  
  
3.  Elimina la definizione di tipo `MyClass` dal codice sorgente utilizzato per compilare A.dll e sostituirla con quanto segue:  
  
    ```  
    #using "B.dll"  
    [assembly:TypeForwardedTo(MyClass::typeid)];  
    ```  
  
4.  Compilare l'assembly A.dll.  
  
5.  Utilizzare A.dll senza ricompilare le applicazioni client.  
  
### Requisiti  
 Opzione del compilatore: **\/clr**