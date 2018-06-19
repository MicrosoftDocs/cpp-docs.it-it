---
title: -INTEGRITYCHECK (richiede controllo della firma) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
ms.assetid: 9e738825-2c98-40cd-8ad2-5d0d9c14893e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 997e3f5bb79ee3cbfa95c5762b0d3e998c56f362
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374245"
---
# <a name="integritycheck-require-signature-check"></a>/INTEGRITYCHECK (richiede controllo della firma)
Specifica che la firma digitale di immagine binari deve essere controllata in fase di caricamento.  
  
```  
/INTEGRITYCHECK[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, **/INTEGRITYCHECK** è disattivata.  
  
 Il **/INTEGRITYCHECK** opzione set, nell'intestazione PE del file DLL o del file eseguibile, ovvero un flag per il gestore della memoria per verificare una firma digitale per caricare l'immagine di Windows. Questa opzione deve essere impostata per entrambi i DLL a 32 bit e a 64 bit che implementano il codice in modalità kernel caricato da determinate funzionalità di Windows ed è consigliata per i driver di dispositivo su Windows Vista, [!INCLUDE[win7](../../build/includes/win7_md.md)], [!INCLUDE[win8](../../build/reference/includes/win8_md.md)], [!INCLUDE[winsvr08](../../build/reference/includes/winsvr08_md.md)] e [!INCLUDE[winserver8](../../build/reference/includes/winserver8_md.md)]. Versioni di Windows precedente a Windows Vista ignorano questo flag. Per ulteriori informazioni, vedere [file forzato l'integrità di firma di Portable Executable (PE)](http://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx).  
  
### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **riga di comando** pagina delle proprietà.  
  
5.  In **opzioni aggiuntive**, immettere `/INTEGRITYCHECK` o `/INTEGRITYCHECK:NO`.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [File di integrità di firma di Portable Executable (PE) forzato](http://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx)   
 [Procedura dettagliata di firma codice in modalità kernel](http://msdn.microsoft.com/windows/hardware/gg487328.aspx)   
 [DLL AppInit in Windows 7 e Windows Server 2008](http://msdn.microsoft.com/windows/hardware/gg463040.aspx)