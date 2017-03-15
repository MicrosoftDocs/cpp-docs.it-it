---
title: "/SECTION (Specifica attributi di sezione) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/section"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/SECTION (opzione del linker)"
  - "attributi di sezione"
  - "SECTION (opzione del linker)"
  - "-SECTION (opzione del linker)"
ms.assetid: 92b69d81-e421-462e-b46f-7d0dff9b9d16
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# /SECTION (Specifica attributi di sezione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/SECTION:name,[[!]{DEKPRSW}][,ALIGN=#]  
```  
  
## Note  
 L'opzione \/SECTION modifica gli attributi di una sezione, sostituendo gli attributi impostati durante la compilazione del file obj per la sezione.  
  
 Una sezione di un file eseguibile portabile \(PE, Portable Executable\) equivale approssimativamente a un segmento o alle risorse di un file nuovo eseguibile \(NE, New Executable\).  Le sezioni contengono codice o dati.  A differenza dei segmenti, le sezioni sono blocchi di memoria contigua senza limiti di dimensione.  Alcune sezioni contengono codice o dati dichiarati e utilizzati direttamente nel programma, mentre altre sezioni di dati vengono create automaticamente nel linker e in Library Manager \(lib.exe\) e contengono informazioni indispensabili per il sistema operativo.  Per ulteriori informazioni sui file NE, vedere l'articolo della Knowledge Base "Executable\-File Header Format" \(Q65122\).  Gli articoli della Knowledge Base sono disponibili nella MSDN Library, o all'indirizzo [http:\/\/support.microsoft.com](http://support.microsoft.com).  
  
 Specificare i due punti \(:\) e un *nome* di sezione.  Per il *nome* è necessario rispettare l'esatta combinazione di maiuscole e minuscole.  
  
 Non utilizzare i nomi che seguono, in quanto si verificherebbero conflitti con i nomi standard.  sdata, ad esempio, viene utilizzato su piattaforme RISC.  
  
-   .arch  
  
-   .bss  
  
-   .data  
  
-   .edata  
  
-   .idata  
  
-   .pdata  
  
-   .rdata  
  
-   .reloc  
  
-   .rsrc  
  
-   .sbss  
  
-   .sdata  
  
-   .srdata  
  
-   .text  
  
-   .xdata  
  
 Specificare uno o più attributi per la sezione.  In questi caratteri di attributo non viene effettuata la distinzione tra maiuscole e minuscole.  È necessario specificare tutti gli attributi che si desidera includere nella sezione. Se si omette un carattere di attributo viene infatti disattivato il bit dell'attributo.  Se non si specifica R, W o E, lo stato esistente di lettura, scrittura o di esecuzione resta immutato.  
  
 Per negare un attributo, anteporre un punto esclamativo \(\!\) al corrispondente carattere.  I significati dei caratteri di attributo sono indicati di seguito.  
  
|Carattere|Attribute|Significato|  
|---------------|---------------|-----------------|  
|E|Execute|La sezione è eseguibile|  
|R|Read|Consente operazioni di lettura sui dati|  
|W|Write|Consente operazioni di scrittura sui dati|  
|S|Shared|Condivide la sezione tra tutti i processi che caricano l'immagine|  
|D|Discardable|Contrassegna la sezione come scaricabile|  
|K|Cacheable|Contrassegna la sezione come non inseribile nella cache|  
|P|Pageable|Contrassegna la sezione come non paginabile|  
  
 La particolarità di K e P è che i flag di sezione a essi corrispondenti sono in senso negativo.  Se si specifica uno di questi caratteri nella sezione text \(\/SECTION:.text,K\), non ci sarà differenza nei flag di sezione quando si esegue [DUMPBIN](../../build/reference/dumpbin-options.md) con l'opzione [\/HEADERS](../../build/reference/headers.md) in quanto l'inserimento nella cache sarà già avvenuto implicitamente.  Per rimuovere l'impostazione predefinita, specificare \/SECTION:.text,\!K e DUMPBIN rivelerà le caratteristiche della sezione, inclusa l'indicazione del mancato inserimento nella cache.  
  
 Una sezione del file PE in cui non è stato impostato l'attributo E, R o W è probabilmente non valida.  
  
 ALIGN*\=\#* consente di specificare un valore di allineamento per una determinata sezione.  Per ulteriori informazioni, vedere [\/ALIGN](../../build/reference/align-section-alignment.md).  
  
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