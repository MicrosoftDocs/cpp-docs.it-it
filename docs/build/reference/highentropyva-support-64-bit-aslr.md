---
title: "/HIGHENTROPYVA (supporta ASLR a 64 bit) | Microsoft Docs"
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
ms.assetid: fe35f9f7-d28e-4694-9aeb-a79db06168e0
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# /HIGHENTROPYVA (supporta ASLR a 64 bit)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica che l'immagine eseguibile supporta un'entropia elevata per ASLR \(Address Space Layout Randomization\) a 64 bit.  
  
## Sintassi  
  
```  
/HIGHENTROPYVA[:NO]  
```  
  
## Note  
 Per impostazione predefinita, \/HIGHENTROPYVA è attivato per le immagini eseguibili a 64 bit.  Non è applicabile a immagini eseguibili a 32 bit.  Per abilitare questa opzione, anche \/DYNAMICBASE deve essere attivato.  
  
 \/HIGHENTROPYVA modifica l'intestazione di un file con estensione dll o exe, per indicare se ASLR con indirizzamento a 64 bit è supportato.  Quando questa opzione è impostata su un eseguibile e su tutti i moduli che da esso dipendono, un sistema operativo che supporta ASLR a 64 bit può impostare i segmenti dell'immagine eseguibile in fase di caricamento tramite l'uso di indirizzi causali in uno spazio di indirizzamento virtuale a 64 bit.  Questo ampio spazio di indirizzi rende più difficile a un utente non autorizzato indovinare una particolare posizione di un'area della memoria.  
  
### Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per altre informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Linker**.  
  
4.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
5.  In **Opzioni aggiuntive**, immettere `/HIGHENTROPYVA` o `/HIGHENTROPYVA:NO`.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)