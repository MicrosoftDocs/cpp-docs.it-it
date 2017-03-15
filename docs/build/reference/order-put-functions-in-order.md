---
title: "/ORDER (Inserisce le funzioni in ordine) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.FunctionOrder"
  - "/order"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ORDER (opzione del linker)"
  - "LINK (strumento) [C++], ottimizzazione dei programmi"
  - "LINK (strumento) [C++], ottimizzazione dello swap"
  - "ORDER (opzione del linker)"
  - "-ORDER (opzione del linker)"
  - "paging, ottimizzazione"
ms.assetid: ecf5eb3e-e404-4e86-9a91-4e5ec157261a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# /ORDER (Inserisce le funzioni in ordine)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/ORDER:@filename  
```  
  
## Parametri  
 *filename*  
 File di testo in cui è specificato l'ordine di collegamento delle funzioni COMDAT.  
  
## Note  
 L'opzione \/ORDER indica a LINK di ottimizzare il programma inserendo determinati COMDAT nell'immagine secondo un ordine predeterminato.  LINK inserisce nell'immagine le funzioni nell'ordine specificato all'interno di ogni sezione.  
  
 Specificare l'ordine in *filename*, un file di testo \(file di risposta\) in cui sono elencati i COMDAT nell'ordine in cui si desidera collegarli.  Ogni riga di *filename* contiene il nome di un COMDAT.  Un oggetto contiene COMDAT se è stato compilato con l'opzione \/Gy.  Nei nomi delle funzioni viene effettuata la distinzione tra maiuscole e minuscole.  
  
 In LINK vengono utilizzate forme decorate di identificatori.  In fase di compilazione gli identificatori vengono decorati alla creazione del file obj.  Utilizzare lo strumento [DUMPBIN](../../build/reference/dumpbin-reference.md) per ottenere la forma decorata di un identificatore quando è necessario specificare tale forma nel linker.  Per ulteriori informazioni sui nomi decorati, vedere [Nomi decorati](../../build/reference/decorated-names.md).  
  
 Se viene utilizzata più di una specifica \/ORDER, sarà attiva l'ultima specificata.  
  
 L'ordinamento consente di ottimizzare il comportamento di paging del programma attraverso l'ottimizzazione dello swap raggruppando una funzione con le funzioni che essa chiama.  È inoltre possibile raggruppare funzioni chiamate di frequente.  Queste tecniche aumentano la probabilità che una funzione chiamata si trovi in memoria quando è necessaria e che non occorra chiamarla dal disco.  
  
 A ogni nome decorato presente in *filename* verrà anteposto automaticamente un carattere di sottolineatura \(\_\), sempre che tale nome non inizi con un punto interrogativo \(?\) o un simbolo di chiocciola \(@\).  Se, ad esempio, un file oggetto contiene `extern "C" int func(int)` e `int main(void)`, con DUMPBIN [\/SYMBOLS](../../build/reference/symbols.md) verranno elencati i seguenti nomi decorati:  
  
```  
009 00000000 SECT3  notype ()    External     | _func  
00A 00000008 SECT3  notype ()    External     | _main  
```  
  
 I nomi specificati nel file di ordinamento, tuttavia, dovrebbero essere `func` e `main`.  
  
 L'opzione \/ORDER disabilita il collegamento incrementale.  
  
> [!NOTE]
>  In LINK non è possibile l'ordinamento delle funzioni statiche in quanto i nomi di tali funzioni non sono nomi di simboli pubblici.  Quando si specifica l'opzione \/ORDER, viene generato l'avviso del linker LNK4037 per ogni simbolo presente nel file di ordinamento che risulti statico o non venga trovato.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Ottimizzazione**.  
  
4.  Modificare la proprietà **Ordine funzioni**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.FunctionOrder%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)