---
title: GetProcAddress
ms.date: 11/04/2016
f1_keywords:
- GetProcAddress
helpviewer_keywords:
- DLLs [C++], GetProcAddress
- ordinal exports [C++]
- GetProcAddress method
ms.assetid: 48d14ae0-47ea-4c5d-96b1-2c158f1a26af
ms.openlocfilehash: 2d322cfe7d3bd60d8d702a226e181eb7b4ede963
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69493257"
---
# <a name="getprocaddress"></a>GetProcAddress

I processi che si collegano in modo esplicito a una DLL chiamano [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) per ottenere l'indirizzo di una funzione esportata nella dll. Usare il puntatore a funzione restituito per chiamare la funzione DLL. **GetProcAddress** accetta come parametri l'handle del modulo dll (restituito da **LoadLibrary**, `AfxLoadLibrary`o **GetModuleHandle**) e accetta il nome della funzione che si vuole chiamare o l'ordinale di esportazione della funzione.

Poiché si sta chiamando la funzione DLL tramite un puntatore e non è presente alcun controllo del tipo in fase di compilazione, assicurarsi che i parametri della funzione siano corretti, in modo da evitare l'overstep della memoria allocata nello stack e causare una violazione di accesso. Un modo per garantire l'indipendenza dai tipi consiste nell'esaminare i prototipi di funzione delle funzioni esportate e creare i typedef corrispondenti per i puntatori a funzione. Ad esempio:

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

Il modo in cui si specifica la funzione desiderata quando si chiama **GetProcAddress** dipende dalla modalità di compilazione della dll.

È possibile ottenere l'ordinale di esportazione solo se la DLL a cui si sta collegando viene compilata con un file di definizione del modulo (con estensione def) e se i numeri ordinali sono elencati con le funzioni nella sezione EXPORTS del file def della dll. La chiamata di **GetProcAddress** con un ordinale di esportazione, anziché il nome della funzione, è leggermente più veloce se la dll include molte funzioni esportate poiché gli ordinali di esportazione vengono usati come indici nella tabella di esportazione della dll. Con un ordinale di esportazione, **GetProcAddress** può individuare la funzione direttamente anziché confrontare il nome specificato con i nomi di funzione nella tabella di esportazione della dll. Tuttavia, è necessario chiamare **GetProcAddress** con un ordinale di esportazione solo se si ha il controllo sull'assegnazione degli ordinali alle funzioni esportate nel file def.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md#linking-implicitly)

- [Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [LoadLibrary e AfxLoadLibrary](loadlibrary-and-afxloadlibrary.md)

- [FreeLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-freelibrary)

- [Esportazione da una DLL tramite i file DEF](exporting-from-a-dll-using-def-files.md)

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
