---
title: "/CLRUNMANAGEDCODECHECK (Aggiunge SupressUnmanagedCodeSecurityAttribute) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/CLRUNMANAGEDCODECHECK"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/CLRUNMANAGEDCODECHECK (opzione del linker)"
  - "-CLRUNMANAGEDCODECHECK (opzione del linker)"
ms.assetid: 73abc426-dab0-45e2-be85-0f9a14206cc2
caps.latest.revision: 15
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /CLRUNMANAGEDCODECHECK (Aggiunge SupressUnmanagedCodeSecurityAttribute)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**\/CLRUNMANAGEDCODECHECK** specifica se il linker applicherà <xref:System.Security.SuppressUnmanagedCodeSecurityAttribute> alle chiamate `PInvoke` generate dal linker dal codice gestito alle DLL native.  
  
## Sintassi  
  
```  
/CLRUNMANAGEDCODECHECK[:NO]  
```  
  
## Note  
 Per impostazione predefinita, il linker applica SuppressUnmanagedCodeSecurityAttribute alle chiamate `PInvoke` generate dal linker.  Quando **\/CLRUNMANAGEDCODECHECK** è in effetto, SuppressUnmanagedCodeSecurityAttribute non viene applicato.  
  
 Il linker si limita ad aggiungere l'attributo agli oggetti compilati con **\/clr** o **\/clr:pure** e non genera chiamate `PInvoke` in oggetti compilati con **\/clr:safe**.  Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 Una chiamata `PInvoke` viene generata quando il linker non è in grado di trovare un simbolo gestito che soddisfi il riferimento da un chiamante gestito, ma solo un simbolo nativo.  Per ulteriori informazioni su `PInvoke`, vedere [Chiamata a funzioni native da codice gestito](../../dotnet/calling-native-functions-from-managed-code.md).  
  
 Se si utilizza <xref:System.Security.AllowPartiallyTrustedCallersAttribute> nel codice, è necessario impostare **\/CLRUNMANAGEDCODECHECK** in modo esplicito.  Un'immagine contenente entrambi gli attributi SuppressUnmanagedCodeSecurity e AllowPartiallyTrustedCallers rappresenta un potenziale problema di sicurezza.  
  
 Per ulteriori informazioni sulle conseguenze dell'utilizzo di SuppressUnmanagedCodeSecurityAttribute, vedere [Security Optimizations](http://msdn.microsoft.com/it-it/cf255069-d85d-4de3-914a-e4625215a7c0).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Linker**.  
  
4.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
5.  Modificare la proprietà **Controllo codice non gestito CLR**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRUnmanagedCodeCheck%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)