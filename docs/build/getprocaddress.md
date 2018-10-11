---
title: GetProcAddress | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- GetProcAddress
dev_langs:
- C++
helpviewer_keywords:
- DLLs [C++], GetProcAddress
- ordinal exports [C++]
- GetProcAddress method
ms.assetid: 48d14ae0-47ea-4c5d-96b1-2c158f1a26af
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ef48157d1f4efb467fd33270ff05271bedd1a563
ms.sourcegitcommit: 3a141cf07b5411d5f1fdf6cf67c4ce928cf389c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/11/2018
ms.locfileid: "49081890"
---
# <a name="getprocaddress"></a>GetProcAddress

I processi in modo esplicito il collegamento a una chiamata DLL [GetProcAddress](/windows/desktop/api/libloaderapi/nf-libloaderapi-getprocaddress) per ottenere l'indirizzo di una funzione esportata nella DLL. Utilizzare il puntatore di funzione restituita per chiamare la funzione DLL. **GetProcAddress** accetta come parametri l'handle del modulo DLL (restituito da **LoadLibrary**, `AfxLoadLibrary`, o **GetModuleHandle**) e il nome della funzione da a chiamata o un numero ordinale di esportazione della funzione.

Poiché si sta chiamando la funzione DLL tramite un puntatore ed è presente alcun controllo del tipo in fase di compilazione, assicurarsi che i parametri della funzione siano corretti in modo che non si oltrepassati la memoria allocata nello stack e provoca una violazione di accesso. Un modo per garantire l'indipendenza dai tipi è Esaminiamo i prototipi delle funzioni esportate e creare oggetti typedef corrispondenti per i puntatori a funzione. Ad esempio:

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

Come si specifica la funzione desiderata quando si chiama **GetProcAddress** dipende dal modo in cui è stata compilata la DLL.

È possibile ottenere l'ordinale di esportazione solo se la DLL si collega a è compilata con un file di definizione (con estensione def) del modulo e se gli ordinali sono elencati con le funzioni nel **esportazioni** sezione del file def della DLL. La chiamata **GetProcAddress** con un'esportazione ordinale, anziché il nome della funzione, è leggermente più veloce se la DLL ha molte funzioni esportate, poiché gli ordinali di esportazione funzionano come indici della DLL di esportare una tabella. Con un ordinale di esportazione **GetProcAddress** può individuare la funzione direttamente anziché confrontare il nome specificato per i nomi delle funzioni nella tabella di esportazione della DLL. Tuttavia, è necessario chiamare **GetProcAddress** con un ordinale di esportazione solo se si dispone di controllare l'assegnazione degli ordinali alle funzioni esportate nel file def.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Come collegare in modo implicito in una DLL](../build/linking-an-executable-to-a-dll.md#linking-implicitly)

- [Determinare quale metodo di collegamento da utilizzare](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [LoadLibrary e AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)

- [FreeLibrary](/windows/desktop/api/libloaderapi/nf-libloaderapi-freelibrary)

- [Esportazione da una DLL tramite i file DEF](../build/exporting-from-a-dll-using-def-files.md)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../build/dlls-in-visual-cpp.md)