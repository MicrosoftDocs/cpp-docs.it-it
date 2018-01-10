---
title: Assembly (nativi e gestiti) misti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- interop [C++], mixed assemblies
- /clr compiler option [C++], mixed assemblies
- managed code [C++], interoperability
- interoperability [C++], mixed assemblies
- mixed DLL loading [C++]
- mixed assemblies [C++], about mixed assemblies
- assemblies [C++], mixed
- mixed assemblies [C++]
- native code [C++], .NET interoperatibility
ms.assetid: 4299dfce-392f-4933-8bf0-5da2f0d1c282
caps.latest.revision: "35"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: aeb0a4f21487d9d230c72bfbfc6a06928455dfe2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mixed-native-and-managed-assemblies"></a>Assembly misti (nativi e gestiti)
Assembly misti sono in grado di contenere i computer non gestito e le istruzioni MSIL. In questo modo possono chiamare ed essere chiamato da componenti .NET, mantenendo la compatibilità con i componenti che non sono completamente gestiti. Utilizzo di assembly misti, gli sviluppatori possono creare applicazioni che usano una combinazione di funzionalità gestite e non gestito. In questo modo, gli assembly misti è ideale per la migrazione di applicazioni Visual C++ esistente alla piattaforma .NET.  
  
 Ad esempio, un'applicazione esistente interamente costituita da funzioni non gestite può portare alla piattaforma .NET ricompilando semplicemente un modulo con il **/clr** opzione del compilatore. Questo modulo è quindi possibile utilizzare le funzionalità di .NET, ma rimane compatibile con il resto dell'applicazione. In questo modo, è possibile convertire un'applicazione per la piattaforma .NET in modo graduale, per ogni singola parte. È inoltre possibile scegliere tra la compilazione e non gestita in base a una funzione per funzione all'interno dello stesso file (vedere [managed, unmanaged](../preprocessor/managed-unmanaged.md)).  
  
 Visual C++ supporta la generazione di tre tipi distinti di assembly gestiti: mista, pura e verificabile. Quest'ultimo sono illustrati in [codice Pure e verificabile (C + + CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
## <a name="in-this-section"></a>In questa sezione  
 [Procedura: migrare a /clr](../dotnet/how-to-migrate-to-clr.md)  
 Vengono descritte le procedure consigliate per l'introduzione o l'aggiornamento delle funzionalità .NET nell'applicazione.  
  
 [Procedura: compilare MFC e ATL codice mediante /clr](../dotnet/how-to-compile-mfc-and-atl-code-by-using-clr.md)  
 Viene illustrato come compilare programmi MFC e ATL esistenti per Common Language Runtime.  
  
 [Inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md)  
 Viene descritto il problema "blocco del caricatore" e le soluzioni.  
  
 [Supporto delle librerie per assembly misti](../dotnet/library-support-for-mixed-assemblies.md)  
 Viene illustrato come utilizzare librerie native in **/clr** compilazioni.  
  
 [Considerazioni sulle prestazioni](../dotnet/performance-considerations-for-interop-cpp.md)  
 Vengono descritte le implicazioni sulle prestazioni di assembly misti e il marshalling dei dati.  
  
 [Domini applicazione e Visual C++](../dotnet/application-domains-and-visual-cpp.md)  
 Viene descritto il supporto di Visual C++ per i domini applicazione.  
  
 [Thunk doppio](../dotnet/double-thunking-cpp.md)  
 Vengono illustrate le implicazioni sulle prestazioni di un punto di ingresso nativo per una funzione gestita.  
  
 [Evitare eccezioni all'arresto di CLR quando si utilizzano oggetti COM compilati con /clr](../dotnet/avoiding-exceptions-on-clr-shutdown-when-consuming-com-objects-built-with-clr.md)  
 Viene illustrato come garantire una corretta chiusura di un'applicazione gestita che utilizza un oggetto COM compilato con **/clr**.  
  
 [Procedura: Creare un'applicazione parzialmente attendibile rimuovendo la dipendenza dalla DLL della libreria CRT](../dotnet/create-a-partially-trusted-application.md)  
 Viene illustrato come creare un'applicazione Common Language Runtime parzialmente attendibile tramite Visual C++ rimuovendo la dipendenza da msvcm90.  
  
 Per ulteriori informazioni sulla codifica linee guida per gli assembly misti, vedere l'articolo MSDN "Una panoramica di Managed/Unmanaged interoperabilità con codice" all'indirizzo [http://msdn.microsoft.com/netframework/default.aspx?pull=/library/dndotnet/html/manunmancode.asp](http://msdn.microsoft.com/netframework/default.aspx?pull=/library/dndotnet/html/manunmancode.asp).  
  
## <a name="see-also"></a>Vedere anche  
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)