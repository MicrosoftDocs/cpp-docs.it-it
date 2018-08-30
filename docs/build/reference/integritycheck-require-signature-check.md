---
title: -INTEGRITYCHECK (richiede controllo della firma) | Microsoft Docs
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
ms.openlocfilehash: acc43bc4175f42282014e94426717527143dc059
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43197056"
---
# <a name="integritycheck-require-signature-check"></a>/INTEGRITYCHECK (richiede controllo della firma)
Specifica che la firma digitale di immagine binari deve essere controllata in fase di caricamento.  
  
```  
/INTEGRITYCHECK[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita **/INTEGRITYCHECK** è disattivata.  
  
 Il **/INTEGRITYCHECK** set di opzioni, ovvero nell'intestazione PE del file DLL o del file eseguibile — un flag per il gestore della memoria verificare la presenza di una firma digitale per caricare l'immagine in Windows. Questa opzione deve essere impostata per le DLL a 32 bit sia 64 bit che implementano il codice in modalità kernel caricato da determinate funzionalità di Windows ed è consigliata per tutti i driver di dispositivo in Windows Vista, Windows 7, Windows 8, Windows Server 2008 e Windows Server 2012. Le versioni di Windows precedenti a Windows Vista ignorano questo flag. Per altre informazioni, vedere [file forzato l'integrità di firma di Portable Executable (PE)](http://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx).  
  
### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere la **Linker** nodo.  
  
4.  Selezionare il **riga di comando** pagina delle proprietà.  
  
5.  Nelle **opzioni aggiuntive**, immettere `/INTEGRITYCHECK` o `/INTEGRITYCHECK:NO`.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [File di forzato l'integrità di firma di Portable Executable (PE)](http://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx)   
 [Procedura dettagliata di firma codice in modalità kernel](https://msdn.microsoft.com/windows/hardware/gg487328.aspx)   
 [DLL di AppInit in Windows 7 e Windows Server 2008](https://msdn.microsoft.com/windows/hardware/gg463040.aspx)