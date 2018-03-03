---
title: 'Procedura: organizzare file di Output di progetto per le compilazioni | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Visual C++, output files
- output files, organizing
ms.assetid: 521d95ea-2dcc-4da0-b5eb-ac3e57941446
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 648321c41fe02541eeb746bae24236c40dc5325e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-organize-project-output-files-for-builds"></a>Procedura: organizzare file di output dei progetti per le compilazioni
In questo argomento vengono descritte le procedure consigliate per l'organizzazione dei file di output di progetto. Generazione di errori quando si configura il file di output di progetto in modo non corretto. Anche in questo argomento vengono descritti i vantaggi e svantaggi di ogni alternativa per organizzare i file di output del progetto.  
  
## <a name="referencing-clr-assemblies"></a>Riferimento ad assembly CLR  
  
#### <a name="to-reference-assemblies-with-using"></a>Fare riferimento agli assembly con #using  
  
1.  È possibile fare riferimento a un assembly direttamente dal codice utilizzando il #using (direttiva), ad esempio `#using <System.Data.dll>`. Per ulteriori informazioni, vedere [# direttiva using](../preprocessor/hash-using-directive-cpp.md).  
  
     Il file specificato può essere un file DLL, .exe, con estensione netmodule o obj, purché si trova in MSIL. Il componente di cui viene fatto riferimento può essere compilato in qualsiasi linguaggio. Con questa opzione, si avrà accesso a Intellisense poiché verranno estratti i metadati dal codice MSIL. Il file in questione deve essere nel percorso del progetto. in caso contrario, non verrà compilato il progetto e Intellisense non sarà disponibile. È un modo semplice per determinare se il file è nel percorso per il pulsante destro del mouse il #using di riga e si sceglie il **documento aperto** comando. Se non viene trovato il file si riceverà la notifica.  
  
     Se non si desidera indicare il percorso completo del file, è possibile utilizzare il **/AI** per modificare il percorso di ricerca per l'opzione del compilatore #using riferimenti. Per altre informazioni, vedere [/AI (Specifica le directory di metadati)](../build/reference/ai-specify-metadata-directories.md).  
  
#### <a name="to-reference-assemblies-with-fu"></a>Per fare riferimento agli assembly con /FU  
  
1.  Anziché fa riferimento a un assembly direttamente da un file di codice come descritto in precedenza, è possibile utilizzare il **/FU** l'opzione del compilatore. Il vantaggio di questo metodo è che non è necessario aggiungere una #using a ogni file che fa riferimento a un determinato assembly.  
  
     Per impostare questa opzione, aprire il **pagine delle proprietà** per il progetto. Espandere il **le proprietà di configurazione** nodo, quindi espandere il **C/C++** nodo e selezionare **avanzate**. Aggiungere gli assembly desiderati accanto a **Imponi #using**. Per altre informazioni, vedere [/FU (Specifica file #using da utilizzare)](../build/reference/fu-name-forced-hash-using-file.md).  
  
#### <a name="to-reference-assemblies-with-add-new-reference"></a>Per fare riferimento ad assembly con Aggiungi nuovo riferimento  
  
1.  Questo è il modo più semplice per utilizzare gli assembly CLR. In primo luogo, verificare che il progetto viene compilato con la **/clr** l'opzione del compilatore. Quindi, fare clic il progetto dal **Esplora** e selezionare **Aggiungi**, **riferimenti**. Il **pagine delle proprietà** nella finestra di dialogo.  
  
2.  Dal **pagine delle proprietà** finestra di dialogo Seleziona **Aggiungi nuovo riferimento**. Verrà visualizzata una finestra di dialogo elencando tutti .NET, COM e gli altri assembly disponibili nel progetto corrente. Selezionare l'assembly desiderato e fare clic su **OK**.  
  
     Dopo aver impostato un riferimento al progetto, le relative dipendenze vengono gestite automaticamente. Inoltre, poiché i metadati sono parte di un assembly, è necessario aggiungere un file di intestazione o un prototipo gli elementi che vengono utilizzati da assembly gestiti.  
  
## <a name="referencing-native-dlls-or-static-libraries"></a>Riferimento a DLL Native o librerie statiche  
  
#### <a name="to-reference-native-dlls-or-static-libraries"></a>Fare riferimento a DLL native o librerie statiche  
  
1.  Fare riferimento al file di intestazione appropriati nel codice utilizzando il #include (direttiva). Il file di intestazione deve essere nel percorso di inclusione o parte del progetto corrente. Per ulteriori informazioni, vedere [#include (direttiva) (C/C++)](../preprocessor/hash-include-directive-c-cpp.md).  
  
2.  È inoltre possibile impostare le dipendenze di progetto. Impostazione delle dipendenze del progetto due garanzie. In primo luogo, assicura che i progetti vengono generati nell'ordine corretto in modo che un progetto può individuare sempre i file dipendenti che necessari. In secondo luogo, aggiunge in modo implicito la directory di output del progetto dipendente per il percorso in modo tale da poter trovare facilmente i file in fase di collegamento.  
  
3.  Per distribuire l'applicazione, è necessario inserire la DLL in una posizione appropriata. Può trattarsi di uno dei valori seguenti:  
  
    1.  Lo stesso percorso del file eseguibile.  
  
    2.  In un punto qualsiasi nel percorso di sistema (il **percorso** variabile di ambiente).  
  
    3.  Nell'assembly side-by-side. Per ulteriori informazioni, vedere [C/C++-by-side di creazione di assembly](../build/building-c-cpp-side-by-side-assemblies.md).  
  
## <a name="working-with-multiple-projects"></a>Utilizzo di più progetti  
 Per impostazione predefinita, i progetti vengono compilati in modo che tutti i file di output vengono creati in una sottodirectory della directory del progetto. La directory è denominata in base alla configurazione di compilazione (ad esempio Debug o rilascio). In ordine per i progetti di pari livello fare riferimento a altro, ogni progetto deve aggiungere in modo esplicito altre directory di output di progetto per un percorso relativo in ordine per il collegamento per avere esito positivo. Questa operazione viene eseguita automaticamente quando si impostano le dipendenze di progetto. Tuttavia, se non si utilizzano le dipendenze, è necessario attentamente gestire questo perché le compilazioni possono diventare molto difficile da gestire. Ad esempio, quando un progetto ha configurazioni Debug e rilascio e include una libreria esterna da un progetto di pari livello, deve utilizzare un file di libreria diverso a seconda di quale configurazione viene compilata. Di conseguenza, questi percorsi a livello di codice può risultare difficile.  
  
 Tutti i file di output essenziali (come file eseguibili, file di collegamento incrementale e file con estensione PDB) vengono copiati in una directory di soluzione comune. Pertanto, quando si utilizza una soluzione che contiene un numero di progetti C++ con configurazioni equivalenti, tutti i file di output vengono centralizzati per collegamento e distribuzione semplificati. È possibile assicurarsi che la libreria di applicazioni/funzionerà come previsto se mantengono tali file insieme (dal momento che i file sono necessariamente nel percorso).  
  
 Il percorso dei file di output può essere un problema durante la distribuzione in un ambiente di produzione. Durante l'esecuzione di progetti nell'IDE, i percorsi delle librerie incluse non sono necessariamente uguale a quello dell'ambiente di produzione. Ad esempio, se dispone di `#using "../../lib/debug/mylib.dll"` nel codice, ma si distribuisce mylib in una posizione diversa relativa, l'applicazione avrà esito negativo in fase di esecuzione. Per evitare questo problema, è consigliabile evitare di utilizzare percorsi relativi nel #include le istruzioni nel codice. È consigliabile accertarsi che i file necessari siano nel percorso di compilazione del progetto e allo stesso modo che i file di produzione corrispondenti siano posizionati correttamente.  
  
#### <a name="how-to-specify-where-output-files-go"></a>Come specificare dove dei file di output  
  
1.  Il percorso del progetto di output del progetto è possano trovare le impostazioni **pagine delle proprietà**. Espandere il nodo accanto a **le proprietà di configurazione** e selezionare **generale**. Il percorso di output è specificato accanto a **Directory di Output**. Per ulteriori informazioni, vedere [pagina delle proprietà Generale (progetto)](../ide/general-property-page-project.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di progetto Visual C++](../ide/visual-cpp-project-types.md)