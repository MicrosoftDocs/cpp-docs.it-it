---
title: GetProcAddress | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- GetProcAddress
dev_langs:
- C++
helpviewer_keywords:
- DLLs [C++], GetProcAddress
- ordinal exports [C++]
- GetProcAddress method
ms.assetid: 48d14ae0-47ea-4c5d-96b1-2c158f1a26af
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2bc32c5f6b6ae4ee80c69dff028f05d2b334d920
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="getprocaddress"></a>GetProcAddress
I processi in modo esplicito il collegamento a una chiamata DLL [GetProcAddress](http://msdn.microsoft.com/library/windows/desktop/ms683212) per ottenere l'indirizzo di una funzione esportata nella DLL. Utilizzare il puntatore a funzione restituito per chiamare la funzione DLL. **GetProcAddress** accetta come parametri l'handle del modulo DLL (restituito da **LoadLibrary**, `AfxLoadLibrary`, o **GetModuleHandle**) e il nome della funzione è desidera chiamata o l'esportazione della funzione ordinale.  
  
 Poiché si sta chiamando la funzione DLL tramite un puntatore e non esiste alcun controllo dei tipi in fase di compilazione, assicurarsi che i parametri della funzione siano corretti, in modo che non si oltrepassare la memoria allocata nello stack e provocare una violazione di accesso. Un modo per garantire l'indipendenza dai tipi è per osservare i prototipi delle funzioni esportate e creare oggetti typedef corrispondenti per i puntatori di funzione. Ad esempio:  
  
```  
typedef UINT (CALLBACK* LPFNDLLFUNC1)(DWORD,UINT);  
...  
  
HINSTANCE hDLL;               // Handle to DLL  
LPFNDLLFUNC1 lpfnDllFunc1;    // Function pointer  
DWORD dwParam1;  
UINT  uParam2, uReturnVal;  
  
hDLL = LoadLibrary("MyDLL");  
if (hDLL != NULL)  
{  
   lpfnDllFunc1 = (LPFNDLLFUNC1)GetProcAddress(hDLL,  
                                           "DLLFunc1");  
   if (!lpfnDllFunc1)  
   {  
      // handle the error  
      FreeLibrary(hDLL);  
      return SOME_ERROR_CODE;  
   }  
   else  
   {  
      // call the function  
      uReturnVal = lpfnDllFunc1(dwParam1, uParam2);  
   }  
}  
```  
  
 Come si specifica la funzione desiderata quando si chiama **GetProcAddress** dipende dal modo in cui è stata creata la DLL.  
  
 È possibile ottenere l'ordinale di esportazione solo se la DLL si effettua il collegamento viene compilata con un file di definizione (con estensione def) del modulo e se gli ordinali sono elencati con le funzioni di **esportazioni** sezione del file def della DLL. La chiamata **GetProcAddress** un'esportazione ordinale, anziché il nome della funzione, è leggermente più veloce se la DLL ha molte funzioni esportate, poiché gli ordinali di esportazione funzionano come indici nella DLL esporta una tabella. Con un numero ordinale di esportazione, **GetProcAddress** può individuare la funzione direttamente anziché confrontare il nome specificato per i nomi delle funzioni nella tabella di esportazione della DLL. Tuttavia, è necessario chiamare **GetProcAddress** con un numero ordinale di esportazione solo se è possibile controllare l'assegnazione degli ordinali alle funzioni esportate nel file def.  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Come collegare in modo implicito a una DLL](../build/linking-an-executable-to-a-dll.md#linking-implicitly)  
  
-   [Determinare quale metodo di collegamento](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [LoadLibrary e AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)  
  
-   [FreeLibrary](http://msdn.microsoft.com/library/windows/desktop/ms683152)  
  
-   [Esportazione da una DLL tramite i file DEF](../build/exporting-from-a-dll-using-def-files.md)  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)