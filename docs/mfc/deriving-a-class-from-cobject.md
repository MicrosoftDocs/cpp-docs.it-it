---
title: "Derivazione da una classe da CObject | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CObject (classe), derivazione da"
  - "CObject (classe), derivazione di classi serializzabili"
  - "DECLARE_DYNAMIC (macro)"
  - "DECLARE_DYNCREATE (macro)"
  - "DECLARE_SERIAL (macro)"
  - "classi derivate, da CObject"
  - "macro [C++], serializzazione"
  - "serializzazione [C++], macro"
ms.assetid: 5ea4ea41-08b5-4bd8-b247-c5de8c152a27
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Derivazione da una classe da CObject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo vengono descritti i passaggi minimi necessari per derivare la classe da [CObject](../mfc/reference/cobject-class.md).  Gli articoli della classe di `CObject` descritti i passaggi necessari per sfruttare le funzionalità specifiche di `CObject`, quale il supporto di debug e diagnostica di serializzazione.  
  
 Nelle discussioni di `CObject`, i termini "connettere il file" e "il file di implementazione" viene utilizzato frequentemente.  Il file di interfaccia \(spesso chiamato il file di intestazione, oppure. Il file H\) contiene la dichiarazione di classe e altre informazioni necessarie per utilizzare la classe.  Il file di implementazione \(o file di .CPP\) contiene la definizione di classe nonché il codice che implementa le funzioni membro di classe.  Ad esempio, per `CPerson`classe denominata, in genere è possibile creare un file di interfaccia denominato PERSON.H e un file di implementazione denominato PERSON.CPP.  Tuttavia, per alcune piccole classi che non verrà condiviso tra applicazioni, può risultare più facile combinare l'interfaccia e l'implementazione in un singolo file di .CPP.  
  
 È possibile scegliere tra quattro livelli di funzionalità quando si deriva una classe da `CObject`:  
  
-   Funzionalità di base: Nessun supporto per le informazioni o la serializzazione della classe di runtime ma include la gestione della memoria diagnostica.  
  
-   Funzionalità di base più supporto per informazioni sulla classe di runtime.  
  
-   Funzionalità di base più supporto per informazioni sulla classe di runtime e la creazione dinamica.  
  
-   Funzionalità di base più supporto per informazioni sulla classe di runtime, alla creazione dinamica e la serializzazione.  
  
 Classi progettate per riutilizzare \(quelle che successivamente fungerà da classe di base\) devono includere almeno il supporto della classe di runtime e il supporto della serializzazione, se necessario del futuro di serializzazione viene pianificato.  
  
 Scegliere il livello di funzionalità utilizzando le macro specifiche delle dichiarazioni e le implementazioni nella dichiarazione e nell'implementazione delle classi che derivano da `CObject`.  
  
 Nella tabella seguente è illustrata la relazione tra le macro utilizzate per la serializzazione e alle informazioni di runtime di supporto.  
  
### Macro utilizzate per la serializzazione e le informazioni di runtime  
  
|Macro utilizzata|CObject::IsKindOf|CRuntimeClass::<br /><br /> CreateObject|CArchive::operator\>\><br /><br /> CArchive::operator\<\<|  
|----------------------|-----------------------|--------------------------------------|-------------------------------------------------------|  
|Funzionalità di base di `CObject`|No|No|No|  
|`DECLARE_DYNAMIC`|Yes|No|No|  
|`DECLARE_DYNCREATE`|Yes|Yes|No|  
|`DECLARE_SERIAL`|Yes|Yes|Yes|  
  
#### Per utilizzare funzionalità di base di CObject  
  
1.  Utilizzare la sintassi C\+\+ normale per derivare la classe da `CObject` \(o da una classe derivata da `CObject`\).  
  
     L'esempio seguente illustra il caso più semplice, la derivazione di una classe da `CObject`:  
  
     [!code-cpp[NVC_MFCCObjectSample#1](../mfc/codesnippet/CPP/deriving-a-class-from-cobject_1.h)]  
  
 In genere, tuttavia, è possibile eseguire l'override di alcune funzioni membro di `CObject` per gestire le specifiche della nuova classe.  Ad esempio, è in genere possibile eseguire l'override della funzione di `Dump` di `CObject` per fornire l'output di debug per il contenuto della classe.  Per informazioni dettagliate su come eseguire l'override di `Dump`, vedere l'articolo [Diagnostica: Eseguire il dump l'indice dell'oggetto](http://msdn.microsoft.com/it-it/727855b1-5a83-44bd-9fe3-f1d535584b59).  È inoltre possibile eseguire l'override della funzione di `AssertValid` di `CObject` per fornire il test personalizzato per convalidare la coerenza dei membri dati di oggetti classe.  Per informazioni su come eseguire l'override di `AssertValid`, vedere [MFC ASSERT\_VALID e CObject::AssertValid](http://msdn.microsoft.com/it-it/7654fb75-9e9a-499a-8165-0a96faf2d5e6).  
  
 L'articolo [Specificare i livelli di funzionalità](../mfc/specifying-levels-of-functionality.md) viene descritto come specificare altri livelli di funzionalità, incluse informazioni sulla classe di runtime, la creazione di un oggetto dinamico e la serializzazione.  
  
## Vedere anche  
 [Utilizzo di CObject](../mfc/using-cobject.md)