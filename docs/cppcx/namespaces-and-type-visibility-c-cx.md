---
title: "Spazi dei nomi e visibilit&#224; del tipo (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: cbc01a3a-3b69-4ded-9c42-ecbf0fd0a00e
caps.latest.revision: 13
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 13
---
# Spazi dei nomi e visibilit&#224; del tipo (C++/CX)
Uno spazio dei nomi è un costrutto C\+\+ standard per il raggruppamento di tipi con funzionalità correlate e per la prevenzione dei conflitti di denominazione nelle librerie. Il sistema di tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] richiede la dichiarazione di tutti i tipi pubblici [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], inclusi quelli nel codice, in uno spazio dei nomi nell'ambito dello spazio dei nomi. I tipi pubblici dichiarati in ambito globale o annidati in un'altra classe generano un errore in fase di compilazione.  
  
 Un file .winmd deve avere lo stesso nome dello spazio dei nomi radice. Ad esempio, è possibile creare un'istanza di una classe denominata A.B.C.MyClass solo se è definita in un file di metadati denominato A.winmd o A.B.winmd o A.B.C.winmd. Il nome dell'eseguibile non deve necessariamente corrispondere al nome del file con estensione winmd.  
  
## Visibilità dei tipi  
 In uno spazio dei nomi, i tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], a differenza dei tipi C\+\+ standard, hanno l'accessibilità privata o pubblica. Per impostazione predefinita, l'accessibilità è privata. Solo un tipo pubblico è visibile ai metadati e quindi utilizzabile da parte di app e componenti che possono essere scritti in linguaggi diversi da C\+\+. Le regole per i tipi visibili sono in genere più restrittive rispetto alle regole per i tipi non visibili perché i tipi visibili non possono esporre concetti specifici di C\+\+ non supportati nei linguaggi .NET o in JavaScript.  
  
> [!NOTE]
>  I metadati sono utilizzati solo in fase di esecuzione dai linguaggi .NET e da JavaScript. Quando un componente o un'app C\+\+ comunica con un altro componente o un'altra app C\+\+, inclusi i componenti Windows, che vengono scritti sempre in C\+\+, non è richiesto l'utilizzo dei metadati in fase di esecuzione.  
  
## Accessibilità e visibilità dei membri  
 In un delegato, un'interfaccia o una classe di riferimento privata, nessun membro viene emesso nei metadati, anche se dispone di accessibilità pubblica. Nelle classi pubbliche di riferimento, è possibile controllare la visibilità dei membri nei metadati indipendentemente dall'accessibilità nel codice sorgente. Come in C\+\+ standard, applica il principio dei privilegi minimi; non rendere visibili i membri nei metadati a meno che non sia assolutamente necessario.  
  
 Utilizza i modificatori di accesso riportati di seguito per controllare sia la visibilità dei metadati che l'accessibilità del codice sorgente.  
  
||||  
|-|-|-|  
|Modificatore|Significato|Emesso nei metadati?|  
|private|L'accessibilità predefinita. Lo stesso significato di C\+\+ standard.|No|  
|protected|Lo stesso significato di C\+\+ standard, sia nell'app o nel componente che nei metadati.|Sì|  
|public|Lo stesso significato di C\+\+ standard.|Sì|  
|`public protected` o `protected public`|Accessibilità protetta nei metadati, pubblica nell'app o nel componente.|Sì|  
|`protected private` o `private protected`|Non visibile nei metadati; accessibilità protetta nell'app o nel componente.||  
|`internal` o `private public`|Il membro è pubblico nell'app o nel componente, ma non è visibile nei metadati.|No|  
  
## Spazi dei nomi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]  
 L'API di Windows è costituita da tipi che sono dichiarati negli spazi dei nomi Windows::\*. Questi spazi dei nomi sono riservati a Windows e non è possibile aggiungere ad essi altri tipi. Il **Visualizzatore oggetti** ti consente di visualizzare questi spazi dei nomi nel file windows.winmd. Per la documentazione sugli spazi dei nomi, vedere l'articolo sulle [API di Windows](http://msdn.microsoft.com/library/windows/apps/br211377).  
  
## Spazi dei nomi [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]  
 Le [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] \([!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]\) definiscono determinati tipi in questi spazi dei nomi come parte della proiezione del sistema di tipi di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].  
  
|||  
|-|-|  
|**Spazio dei nomi**|**Descrizione**|  
|default|Contiene i tipi numerici e char16 incorporati. Questi tipi sono inclusi nell'ambito di ogni spazio dei nomi e non è mai richiesto l'utilizzo dell'istruzione `using`.|  
|Piattaforma|Contiene principalmente tipi pubblici che corrispondono a tipi di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], quali `Array<T>`, `String`, `Guid` e `Boolean`. Include inoltre i tipi di supporto specifici quali `Platform::Agile<T>` e `Platform::Box<T>`.|  
|Platform::Collections|Contiene classi di raccolte concrete che implementano interfacce di raccolta [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], `IVector`di `IMap` e così via. Questi tipi sono definiti nel file di intestazione collection.h, non in platform.winmd.|  
|Platform::Details|Contiene i tipi utilizzati dal compilatore e che non sono per uso pubblico.|  
  
## Vedere anche  
 [Sistema di tipi \(C\+\+\/CX\)](../cppcx/type-system-c-cx.md)