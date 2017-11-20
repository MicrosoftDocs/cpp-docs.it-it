---
title: -VOCE (simbolo del punto di ingresso) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /entry
- VC.Project.VCLinkerTool.EntryPointSymbol
dev_langs: C++
helpviewer_keywords:
- starting address
- -ENTRY linker option
- /ENTRY linker option
- ENTRY linker option
ms.assetid: 26c62ba2-4f52-4882-a7bd-7046a0abf445
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 6daafeba4376cdab679d7e93dce0605fae97a98e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="entry-entry-point-symbol"></a>/ENTRY (Simbolo del punto di ingresso)
```  
/ENTRY:function  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *function*  
 Una funzione che specifica un valore definito dall'utente iniziale l'indirizzo di un file .exe o DLL.  
  
## <a name="remarks"></a>Note  
 L'opzione /ENTRY specifica una funzione di punto di ingresso come indirizzo iniziale di un file .exe o DLL.  
  
 La funzione deve essere definita per l'utilizzo di `__stdcall` la convenzione di chiamata. I parametri e valore restituito varia a seconda se il programma è un'applicazione console, un'applicazione di windows o una DLL. È consigliabile consentire al linker di impostare il punto di ingresso in modo che la libreria di run-time C viene inizializzata correttamente e costruttori di C++ per gli oggetti statici vengono eseguiti.  
  
 Per impostazione predefinita, l'indirizzo iniziale è il nome di una funzione della libreria di runtime C. Il linker viene selezionata in base agli attributi del programma, come illustrato nella tabella seguente.  
  
|Nome della funzione|Impostazione predefinita per|  
|-------------------|-----------------|  
|**mainCRTStartup** (o **wmainCRTStartup**)|Un'applicazione che utilizza /SUBSYSTEM; chiamate `main` (o `wmain`)|  
|**WinMainCRTStartup** (o **wWinMainCRTStartup**)|Un'applicazione che utilizza /SUBSYSTEM:**WINDOWS**; chiamate `WinMain` (o `wWinMain`), che deve essere definito da utilizzare`__stdcall`|  
|**DllMainCRTStartup**|UNA DLL. chiamate `DllMain` se è presente, che deve essere definito da utilizzare`__stdcall`|  
  
 Se il [/DLL](../../build/reference/dll-build-a-dll.md) o [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) opzione non è specificata, il linker seleziona un sottosistema e punto di ingresso a seconda che `main` o `WinMain` è definito.  
  
 Le funzioni `main`, `WinMain`, e `DllMain` rappresentano le tre forme del punto di ingresso definito dall'utente.  
  
 Quando si crea un'immagine gestita, la funzione specificata a /ENTRY deve avere una firma di (LPVOID *var1*, DWORD *var2*, LPVOID *var3*).  
  
 Per informazioni su come definire i propri `DllMain` punto di ingresso, vedere [DLL e Visual C++ il comportamento della libreria di runtime](../../build/run-time-library-behavior.md) .  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **avanzate** pagina delle proprietà.  
  
4.  Modificare il **punto di ingresso** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EntryPointSymbol%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)