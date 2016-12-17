---
title: "/EXPORT (Esporta una funzione) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.ExportFunctions"
  - "/export"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/EXPORT (opzione del linker)"
  - "EXPORT (opzione del linker)"
  - "-EXPORT (opzione del linker)"
ms.assetid: 0920fb44-a472-4091-a8e6-73051f494ca0
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /EXPORT (Esporta una funzione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/EXPORT:entryname[,@ordinal[,NONAME]][,DATA]  
```  
  
## Note  
 Questa opzione consente di esportare una funzione dal programma in modo che possa essere chiamata in altri programmi.  È inoltre possibile esportare dati.  Le esportazioni vengono in genere definite in una DLL.  
  
 *entryname* è il nome della funzione o dell'elemento di dati che deve essere utilizzato dal programma chiamante.  Il parametro `ordinal` specifica un indice nella tabella delle esportazioni compreso nell'intervallo tra 1 e 65,535. Se non si specifica il parametro `ordinal`, ne viene assegnato uno tramite LINK.  La parola chiave **NONAME** esporta la funzione solo come ordinal, senza un *entryname*.  
  
 La parola chiave **DATA** specifica che l'elemento esportato è un elemento di dati.  È necessario dichiarare l'elemento di dati nel programma client utilizzando **extern \_\_declspec\(dllimport\)**.  
  
 Sono disponibili tre metodi per l'esportazione di una definizione, elencati di seguito nell'ordine in cui se ne consiglia l'utilizzo:  
  
1.  [\_\_declspec\(dllexport\)](../../cpp/dllexport-dllimport.md) nel codice sorgente  
  
2.  Istruzione [EXPORTS](../../build/reference/exports.md) in un file def  
  
3.  Una specifica \/EXPORT in un comando LINK  
  
 Tutti e tre i metodi possono essere utilizzati nello stesso programma.  Quando si compila mediante LINK un programma che contiene esportazioni, si crea anche una libreria di importazioni, a meno che nella compilazione non venga utilizzato un file EXP.  
  
 In LINK vengono utilizzate forme decorate di identificatori.  In fase di compilazione gli identificatori vengono decorati alla creazione del file obj.  Se *entryname* viene specificato per il linker nella forma non decorata \(come si presenta nel codice sorgente\), verrà automaticamente effettuato un tentativo di cercare il nome decorato corrispondente.  Se non è possibile trovare una corrispondenza univoca, verrà generato un messaggio di errore.  Utilizzare lo strumento [DUMPBIN](../../build/reference/dumpbin-reference.md) per ottenere la forma dei [nomi decorati](../../build/reference/decorated-names.md) di un identificatore quando è necessario specificarla al linker.  
  
> [!NOTE]
>  Non specificare la forma decorata degli identificatori C dichiarati `__cdecl` o `__stdcall`.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)