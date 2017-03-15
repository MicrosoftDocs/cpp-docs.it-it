---
title: "/INTEGRITYCHECK (richiede controllo della firma) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 9e738825-2c98-40cd-8ad2-5d0d9c14893e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /INTEGRITYCHECK (richiede controllo della firma)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica che la firma digitale di un'immagine binaria deve essere controllata in fase di caricamento.  
  
```  
/INTEGRITYCHECK[:NO]  
```  
  
## Note  
 Per impostazione predefinita, l'opzione **\/INTEGRITYCHECK** è disattivata.  
  
 L'opzione **\/INTEGRITYCHECK** imposta—nell'intestazione del PE header del file DLL o del file eseguibile—un flag per il gestore della memoria, affinché controlli che ci sia una firma digitale, al fine di caricare l'immagine in Windows.  Questa opzione deve essere impostata per entrambi i DLL a 32 bit e a 64 bit che implementano il codice in modalità kernel caricato da determinate funzionalità di Windows ed è consigliata per i driver di dispositivo su Windows Vista, [!INCLUDE[win7](../../build/includes/win7_md.md)], [!INCLUDE[win8](../../build/includes/win8_md.md)], [!INCLUDE[winsvr08](../../build/includes/winsvr08_md.md)], e [!INCLUDE[winserver8](../../build/includes/winserver8_md.md)].  Le versioni di Windows precedenti a Windows Vista ignorano questo flag.  Per ulteriori informazioni, vedere la pagina relativa alla [firma di integrità imposta dei file eseguibili di tipo PE](http://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx).  
  
### Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per ulteriori informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Linker**.  
  
4.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
5.  In **Opzioni aggiuntive** immettere `/INTEGRITYCHECK` o `/INTEGRITYCHECK:NO`.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [Firma di integrità imposta dei file eseguibili di tipo PE](http://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx)   
 [Procedura dettagliata relativa alla firma del codice in modalità kernel](http://msdn.microsoft.com/windows/hardware/gg487328.aspx)   
 [DLL di AppInit in Windows 7 e Windows Server 2008](http://msdn.microsoft.com/windows/hardware/gg463040.aspx)