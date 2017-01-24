---
title: "Accesso alle informazioni sulle classi di runtime | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi [C++], informazioni sulle classi in fase di esecuzione"
  - "CObject (classe), accesso alle informazioni sulle classi in fase di esecuzione"
  - "CObject (classe), e RTTI"
  - "CObject (classe), utilizzo del metodo IsKindOf"
  - "CObject (classe), utilizzo della macro RUNTIME_CLASS"
  - "IsKindOf (metodo)"
  - "RTTI (opzione del compilatore)"
  - "runtime"
  - "runtime, informazioni sulle classi"
  - "classe in fase di esecuzione"
  - "classe in fase di esecuzione, accesso alle informazioni"
  - "RUNTIME_CLASS (macro)"
  - "RUNTIME_CLASS (macro), utilizzo"
ms.assetid: 3445a9af-0bd6-4496-95c3-aa59b964570b
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Accesso alle informazioni sulle classi di runtime
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come accedere alle informazioni sulla classe di un oggetto in fase di esecuzione.  
  
> [!NOTE]
>  MFC non utilizza il supporto [Informazioni sui tipi in fase di esecuzione](../cpp/run-time-type-information.md) \(RTTI\) introdotto in Visual C\+\+ 4.0.  
  
 Se la classe è stata derivata da [CObject](../mfc/reference/cobject-class.md) e si è fatto utilizzo delle macro **DECLARE**\_**DYNAMIC** e `IMPLEMENT_DYNAMIC`, `DECLARE_DYNCREATE` e `IMPLEMENT_DYNCREATE`, o `DECLARE_SERIAL` e `IMPLEMENT_SERIAL` illustrate nell'articolo [Derivare una classe da CObject](../mfc/deriving-a-class-from-cobject.md), la classe `CObject` è in grado di determinare la classe esatta di un oggetto in fase di esecuzione.  
  
 Questa possibilità è molto utile quando è necessario un controllo di tipo aggiuntivo degli argomenti di funzione e quando è necessario scrivere codice specifico in base alla classe di un oggetto.  Comunque, questa operazione non è in genere consigliabile in quanto duplica la funzionalità delle funzioni virtuali.  
  
 La funzione membro `IsKindOf` di `CObject` può essere utilizzata per determinare se un particolare oggetto appartiene a una classe specificata o se è derivato da una classe specifica.  L'argomento per `IsKindOf` è un oggetto `CRuntimeClass`, che è possibile ottenere utilizzando la macro `RUNTIME_CLASS` con il nome della classe.  
  
### Per utilizzare la macro RUNTIME\_CLASS  
  
1.  Utilizzare `RUNTIME_CLASS` con il nome della classe, come illustrato di seguito per la classe `CObject`:  
  
     [!code-cpp[NVC_MFCCObjectSample#4](../mfc/codesnippet/CPP/accessing-run-time-class-information_1.cpp)]  
  
 Raramente sarà necessario accedere direttamente all'oggetto della classe di runtime.  Un altro utilizzo comune consiste nel passare l'oggetto della classe di runtime alla funzione `IsKindOf`, come illustrato nella procedura seguente.  La funzione `IsKindOf` esegue dei test su un oggetto per vedere se appartiene ad una determinata classe.  
  
#### Per utilizzare la funzione IsKindOf  
  
1.  Assicurarsi che la classe disponga di supporto alle classi di runtime.  Ovvero la classe deve essere derivata direttamente o indirettamente da `CObject` e devono essere usate le macro **DECLARE**\_**DYNAMIC** e `IMPLEMENT_DYNAMIC`, `DECLARE_DYNCREATE` e `IMPLEMENT_DYNCREATE`, o `DECLARE_SERIAL` e `IMPLEMENT_SERIAL` descritte nell'articolo [Derivare una classe da CObject](../mfc/deriving-a-class-from-cobject.md).  
  
2.  Chiamare la funzione membro `IsKindOf` per gli oggetti della classe, utilizzando la macro `RUNTIME_CLASS` per la generazione dell'argomento `CRuntimeClass`, come illustrato di seguito:  
  
     [!code-cpp[NVC_MFCCObjectSample#2](../mfc/codesnippet/CPP/accessing-run-time-class-information_2.h)]  
  
     [!code-cpp[NVC_MFCCObjectSample#5](../mfc/codesnippet/CPP/accessing-run-time-class-information_3.cpp)]  
  
    > [!NOTE]
    >  IsKindOf restituisce **TRUE** se l'oggetto è un membro della classe specificata o di una classe derivata dalla classe specificata.  `IsKindOf` non supporta l'ereditarietà multipla o classi di base virtuali, sebbene sia possibile utilizzare l'ereditarietà multipla per le classi derivate di Microsoft Foundation se necessario.  
  
 Un utilizzo di informazioni sulla classe di runtime è la creazione dinamica di oggetti.  Questo processo è descritto nell'articolo [Creazione dinamica di un oggetto](../mfc/dynamic-object-creation.md).  
  
 Per informazioni più dettagliate sulla serializzazione e le informazioni sulla classe di runtime, vedere gli articoli [File in MFC](../mfc/files-in-mfc.md) e [Serializzazione](../mfc/serialization-in-mfc.md).  
  
## Vedere anche  
 [Utilizzo di CObject](../mfc/using-cobject.md)