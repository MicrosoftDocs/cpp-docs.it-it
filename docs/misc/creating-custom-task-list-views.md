---
title: "Creazione di visualizzazioni personalizzate dell&#39;elenco attivit&#224; | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Elenco attività, visualizzazioni personalizzate"
ms.assetid: c25f8f5d-55a1-4b5e-b617-3d1140bcb98a
caps.latest.revision: 13
caps.handback.revision: 13
manager: "douge"
---
# Creazione di visualizzazioni personalizzate dell&#39;elenco attivit&#224;
È possibile visualizzare un elenco attività personalizzato in Visual Studio creando una visualizzazione personalizzata dell'elenco attività.  
  
 Utilizzare il Registro di sistema per creare una visualizzazione personalizzata e per effettuare queste specifiche:  
  
-   le colonne  
  
-   L'ordinamento delle colonne  
  
-   Ordinamento predefinito  
  
-   Categorie di attività che si desidera visualizzare  
  
 È possibile visualizzare una categoria personalizzata o specificare CAT\_ALL per le più categorie.  È anche possibile creare le colonne personalizzate di testo che contengono tutto il testo.  Tuttavia, non è possibile ordinare le colonne personalizzate del testo.  
  
 Nelle tabelle riportate di seguito il formato del Registro di sistema per le visualizzazioni personalizzate l'elenco attività.  
  
 In ognuna delle tabelle, *VS la radice del registro* è uguale a HKEY\_LOCAL\_MACHINE \\Software\\Microsoft\\VisualStudio \\ 8,0 \\.  Le tabelle forniscono le voci e le informazioni aggiuntive di script per ogni istruzione del Registro di sistema.  
  
 \[*VS la radice del registro*\\TaskList\\Views \\*GUID*\]  
  
|Nome|Type|Intervallo|Descrizione|  
|----------|----------|----------------|-----------------|  
|Nome|REG\_SZ|Text|Nome della stringa della visualizzazione o di \#xxx.<br /><br /> Il nome può essere una normale stringa come “la visualizzazione in modo personalizzato„ o può essere una stringa di risorsa all'interno di un pacchetto \(\#xxx\).|  
|Pacchetto|REG\_SZ|Text|\[choose\] rappresentazione di stringa del GUID.  Questa condizione è obbligatoria se alcune delle stringhe sono stringhe di risorsa \(\#xxx\); in caso contrario, viene ignorata.|  
  
 \[*VS la radice del registro*\\TaskList\\Views \\*GUID*\\Columns \\*numero*\]  
  
> [!NOTE]
>  *numero* è il 1 ordine in base delle colonne della visualizzazione \(dove 1 è la colonna più a sinistra\).  Per ulteriori colonne, incremento *numero*.  
  
|Nome|Type|Intervallo|Descrizione|  
|----------|----------|----------------|-----------------|  
|Campo|REG\_DWORD||<xref:Microsoft.VisualStudio.Shell.Interop.VSTASKFIELD> che è il campo della colonna.|  
|Larghezza|REG\_DWORD||Parametro facoltativo.  Larghezza della colonna in pixel.  Se la colonna non è importante, questo parametro viene ignorato.|  
|Indice|REG\_DWORD||Parametro facoltativo.  se il campo è FLD\_CUSTOM, questo è l'indice di colonna personalizzato.|  
|Nome|REG\_SZ|Text|Se il campo è FLD\_CUSTOM, è il nome della colonna personalizzata.<br /><br /> Il nome può essere una stringa di risorsa in formato di \#xxx.|  
|Filtro|REG\_SZ o REG\_DWORD||Un DWORD con un incorporato VSTASKCATEGORY o una STRINGA che rappresenta il GUID di una categoria personalizzata.|  
  
 \[*VS la radice del registro*\\TaskList\\Views \\*GUID*\\Sort \\*numero*\]  
  
> [!NOTE]
>  *numero* identifica la chiave di ordinamento.  Ad esempio, per la chiave di ordinamento primaria, uguale a 1. di *numero* .  Per la chiave di ordinamento secondario, *numero* è uguale a 2, e così via.  
  
|Nome|Type|Intervallo|Descrizione|  
|----------|----------|----------------|-----------------|  
|Campo|REG\_DWORD||<xref:Microsoft.VisualStudio.Shell.Interop.VSTASKFIELD> che è il campo della colonna.|  
|Indice|REG\_DWORD||Parametro facoltativo.  se il campo è FLD\_CUSTOM, questo è l'indice di colonna personalizzato.|  
  
 Per implementare una colonna personalizzata, è necessario implementare l'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskItem2> sugli elementi attività ed è necessario distribuire i seguenti metodi su tale interfaccia:  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskItem2.get_CustomColumnText%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskItem2.put_CustomColumnText%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskItem2.IsCustomColumnReadOnly%2A>  
  
 Una volta obbligatorio, l'elenco attività eseguire una query l'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskItem2> utilizzando un numero di colonne personalizzato da una visualizzazione specifica, rappresentata da *un GUID*.  Se l'attività ha le informazioni corrette sulla colonna nella visualizzazione, immettere le informazioni a tale colonna e si specifica se il testo è di sola lettura.  
  
## Vedere anche  
 [Procedura: Creare categorie personalizzate di elenchi di attività](../misc/how-to-create-custom-categories-of-task-lists.md)