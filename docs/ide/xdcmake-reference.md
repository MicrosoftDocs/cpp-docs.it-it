---
title: Riferimento a XDCMake | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: xdcmake
dev_langs: C++
helpviewer_keywords: xdcmake program
ms.assetid: 14e65747-d000-4343-854b-8393bf01cbac
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ea635d701b4dea2471067072083d9568f11f3d82
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="xdcmake-reference"></a>Riferimento a XDCMake
xdcmake.exe è un programma che viene compilato il file xdc in un file XML. Un file xdc viene creato dal compilatore Visual C++ per ogni file di codice sorgente quando il codice sorgente viene compilato con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) e quando i file del codice sorgente contiene commenti della documentazione contrassegnati con tag XML.  
  
### <a name="to-use-xdcmakeexe-in-the-visual-studio-development-environment"></a>Per utilizzare xdcmake.exe nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).  
  
2.  Aprire il **le proprietà di configurazione** cartella.  
  
3.  Fare clic su di **commenti al documento XML** pagina delle proprietà.  
  
> [!NOTE]
>  opzioni di xdcmake.exe nella riga di comando differiscono dalle opzioni quando xdcmake.exe viene utilizzato nell'ambiente di sviluppo (pagine delle proprietà). Per informazioni sull'utilizzo xdcmake.exe nell'ambiente di sviluppo, vedere [pagine delle proprietà dello strumento generatore di documenti XML](../ide/xml-document-generator-tool-property-pages.md).  
  
## <a name="syntax"></a>Sintassi  
 xdcmake`input_filename options`  
  
## <a name="parameters"></a>Parametri  
 dove:  
  
 `input_filename`  
 Il nome di file dei file xdc utilizzati come input per xdcmake.exe. Specificare uno o più file xdc o utilizzare *. xdc per utilizzare tutti i file xdc nella directory corrente.  
  
 `options`  
 Zero o più delle operazioni seguenti:  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|/?, /Help|Visualizzare la Guida per xdcmake.exe.|  
|/assembly:*filename*|Consente di specificare il valore di \<assembly > tag nel file XML.  Per impostazione predefinita, il valore di \<assembly > tag corrisponde al nome del file XML.|  
|/nologo|Non visualizzare messaggio di copyright.|  
|/out:*filename*|Consente di specificare il nome del file XML.  Per impostazione predefinita, il nome del file XML è il nome del file del primo file xdc elaborato da xdcmake.exe.|  
  
## <a name="remarks"></a>Note  
 Visual Studio richiamerà xdcmake.exe automaticamente quando si compila un progetto. È anche possibile richiamare xdcmake.exe nella riga di comando.  
  
 Vedere [tag consigliati per i commenti relativi alla documentazione](../ide/recommended-tags-for-documentation-comments-visual-cpp.md) per ulteriori informazioni sull'aggiunta di commenti relativi alla documentazione per i file del codice sorgente.  
  
## <a name="see-also"></a>Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)