---
title: -HIGHENTROPYVA (supporto ASLR a 64 Bit) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: fe35f9f7-d28e-4694-9aeb-a79db06168e0
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 37bbc9330984eca85e96e1e2a4a2b3b7942a5642
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="highentropyva-support-64-bit-aslr"></a>/HIGHENTROPYVA (supporta ASLR a 64 bit)
Specifica che l'immagine eseguibile supporta un'entropia elevata per ASLR (Address Space Layout Randomization) a 64 bit.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/HIGHENTROPYVA[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, /HIGHENTROPYVA è attivato per le immagini eseguibili a 64 bit. Non è applicabile a immagini eseguibili a 32 bit. Per abilitare questa opzione, anche /DYNAMICBASE deve essere attivato.  
  
 /HIGHENTROPYVA modifica l'intestazione di un file con estensione dll o exe, per indicare se ASLR con indirizzamento a 64 bit è supportato. Quando questa opzione è impostata su un eseguibile e su tutti i moduli che da esso dipendono, un sistema operativo che supporta ASLR a 64 bit può impostare i segmenti dell'immagine eseguibile in fase di caricamento tramite l'uso di indirizzi causali in uno spazio di indirizzamento virtuale a 64 bit. Questo ampio spazio di indirizzi rende più difficile a un utente non autorizzato indovinare una particolare posizione di un'area della memoria.  
  
### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **riga di comando** pagina delle proprietà.  
  
5.  In **opzioni aggiuntive**, immettere `/HIGHENTROPYVA` o `/HIGHENTROPYVA:NO`.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)