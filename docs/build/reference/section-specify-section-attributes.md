---
title: -SEZIONE (specifica attributi di sezione) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /section
dev_langs: C++
helpviewer_keywords:
- SECTION linker option
- -SECTION linker option
- section attributes
- /SECTION linker option
ms.assetid: 92b69d81-e421-462e-b46f-7d0dff9b9d16
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: e3fd7e844d77b9a92408c0708542a4f8f5edf304
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="section-specify-section-attributes"></a>/SECTION (Specifica attributi di sezione)
```  
/SECTION:name,[[!]{DEKPRSW}][,ALIGN=#]  
```  
  
## <a name="remarks"></a>Note  
 L'opzione /SECTION modifica gli attributi di una sezione, sostituendo gli attributi impostati quando è stato compilato il file con estensione obj per la sezione.  
  
 Una sezione in un file eseguibile portabile (PE) è quasi equivalente a un segmento o le risorse in un nuovo file (NE) eseguibile. Sezioni contengono codice o dati. A differenza dei segmenti, le sezioni sono blocchi di memoria contigua senza vincoli di dimensioni. Alcune sezioni contengono codice o dati che il programma dichiarati e utilizzati direttamente, mentre altre sezioni di dati vengono creati automaticamente per il linker e gestione librerie (lib.exe) contengono informazioni essenziali per il sistema operativo. Per ulteriori informazioni sui file NE, consultare l'articolo della Knowledge Base articolo "intestazione formato del File eseguibile" (Q65122). È possibile trovare articoli della Knowledge Base in MSDN Library o al [http://support.microsoft.com](http://support.microsoft.com).  
  
 Specificare i due punti (:) e una sezione *nome*. Il *nome* tra maiuscole e minuscole.  
  
 Non utilizzare i nomi seguenti, in cui è in conflitto con i nomi standard. Sdata, ad esempio, viene utilizzato sulle piattaforme RISC:  
  
-   .arch  
  
-   BSS  
  
-   . Data  
  
-   .edata  
  
-   .IData  
  
-   . pdata  
  
-   rdata  
  
-   reloc  
  
-   . rsrc  
  
-   sbss  
  
-   sdata  
  
-   .srdata  
  
-   . Text  
  
-   . XData  
  
 Specificare uno o più attributi per la sezione. I caratteri di attributo, elencati di seguito, non fanno distinzione tra maiuscole e minuscole. È necessario specificare tutti gli attributi che si desidera che la sezione. un carattere di attributo viene omesso fa sì che bit dell'attributo è disattivato. Se non si specifica R, W o E, esistente di lettura, scrittura o esecuzione resta immutato.  
  
 Per negare un attributo, anteporre il carattere con un punto esclamativo (!). Il significato dei caratteri di attributo è illustrato di seguito.  
  
|Carattere|Attributo|Significato|  
|---------------|---------------|-------------|  
|E|Esegui|La sezione è eseguibile|  
|R|Lettura|Consente operazioni di lettura sui dati|  
|W|Write|Consente operazioni di scrittura sui dati|  
|S|Shared|Condivide la sezione tra tutti i processi che caricano l'immagine|  
|D|Scaricabile|Contrassegna la sezione come annullabile|  
|K|Memorizzabile nella cache|Contrassegna la sezione come non memorizzabile nella cache|  
|P|Paging|Contrassegna la sezione come non paginabile|  
  
 K e P sono particolari i flag di sezione che corrispondono ad essi sono in senso negativo. Se si specifica uno di questi caratteri nella sezione (/ /Section:, K), non vi sarà alcuna differenza nei flag di sezione quando si esegue [DUMPBIN](../../build/reference/dumpbin-options.md) con il [/HEADERS](../../build/reference/headers.md) opzione; è già in modo implicito è stato memorizzato nella cache. Per rimuovere il valore predefinito, specificare /Section:. Text! K e DUMPBIN riveleranno caratteristiche di sezione, ad esempio "Non memorizzati nella cache."  
  
 Una sezione del file PE che non dispone di E, R o l impostato è probabilmente non è valida.  
  
 ALIGN *=#*  consente di specificare un valore di allineamento per una particolare sezione. Vedere [/align](../../build/reference/align-section-alignment.md) per ulteriori informazioni.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione nel **opzioni aggiuntive** casella.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)