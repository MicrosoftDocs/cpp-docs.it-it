---
title: -CLRUNMANAGEDCODECHECK (Add SupressUnmanagedCodeSecurityAttribute) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /CLRUNMANAGEDCODECHECK
dev_langs:
- C++
helpviewer_keywords:
- -CLRUNMANAGEDCODECHECK linker option
- /CLRUNMANAGEDCODECHECK linker option
ms.assetid: 73abc426-dab0-45e2-be85-0f9a14206cc2
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f32ae791ebb09d3d2cfced48c42f982580e69b63
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="clrunmanagedcodecheck-add-supressunmanagedcodesecurityattribute"></a>/CLRUNMANAGEDCODECHECK (Aggiunge SupressUnmanagedCodeSecurityAttribute)
**/CLRUNMANAGEDCODECHECK** specifica se il linker applicherà <xref:System.Security.SuppressUnmanagedCodeSecurityAttribute> a generate dal linker `PInvoke` chiamate dal codice gestito in DLL native.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/CLRUNMANAGEDCODECHECK[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, il linker applica SuppressUnmanagedCodeSecurityAttribute generate dal linker `PInvoke` chiamate. Quando **/CLRUNMANAGEDCODECHECK** è in effetti, non è stato applicato SuppressUnmanagedCodeSecurityAttribute.  
  
 Il linker aggiunge solo l'attributo agli oggetti compilati con **/clr** o **/clr: pure**. Tuttavia, il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e verrà rimossa in una versione futura del compilatore.  
  
 Oggetto `PInvoke` chiamata viene generata dal linker quando il linker non è possibile trovare un simbolo gestito per soddisfare un riferimento da un chiamante gestito ma solo un simbolo nativo. Per ulteriori informazioni su `PInvoke`, vedere [chiamata a funzioni Native da codice gestito](../../dotnet/calling-native-functions-from-managed-code.md).  
  
 Si noti che se si utilizza <xref:System.Security.AllowPartiallyTrustedCallersAttribute> nel codice, è necessario impostare in modo esplicito **/CLRUNMANAGEDCODECHECK**. Se un'immagine contiene entrambi gli attributi SuppressUnmanagedCodeSecurity e AllowPartiallyTrustedCallers è potenziale vulnerabilità di sicurezza.  
  
 Vedere [Secure linee guida di codifica per il codice non gestito](/dotnet/framework/security/secure-coding-guidelines-for-unmanaged-code) per ulteriori informazioni sulle implicazioni dell'utilizzo di SuppressUnmanagedCodeSecurityAttribute.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **avanzate** pagina delle proprietà.  
  
5.  Modificare il **controllo codice non gestito CLR** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRUnmanagedCodeCheck%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)