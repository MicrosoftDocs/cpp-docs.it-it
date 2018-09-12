---
title: Porting da UNIX a Win32 | Microsoft Docs
ms.custom: ''
ms.date: 08/02/2018
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- APIs [C++], porting to Win32
- Windows API [C++], migrating from UNIX
- migration [C++]
- UNIX [C++], porting to Win32
- porting to Win32 [C++], from UNIX
- porting to Win32 [C++]
- Win32 applications [C++], migrating from UNIX
ms.assetid: 3837e4fe-3f96-4f24-b2a1-7be94718a881
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 18217b1d4574f6591287ab6cb83e28c67fe95537
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43218124"
---
# <a name="porting-from-unix-to-win32"></a>Porting da UNIX a Win32
Per la migrazione di applicazioni da UNIX a Windows è possibile scegliere tra diverse opzioni:  
  
- Porting di applicazioni da UNIX a Win32 con le librerie UNIX  
  
- Porting di applicazioni da UNIX a Win32 in modalità nativa  
  
- Esecuzione di applicazioni UNIX in Windows con il sottosistema POSIX  
  
## <a name="unix-libraries"></a>Librerie UNIX  
 
Un'opzione normalmente presa in considerazione dai programmatori UNIX prevede l'uso di librerie di terze parti simili a UNIX per consentire la compilazione del codice UNIX come un eseguibile Win32. A tale scopo sono disponibili in commercio diverse librerie, di cui almeno una di dominio pubblico. Si tratta di un'opzione valida per alcune applicazioni. Il vantaggio di queste librerie di porting è che riducono al minimo le operazioni di porting iniziali. Lo svantaggio principale, per un prodotto software competitivo è che il porting nativo Win32 di un'applicazione è in genere più rapido e includerà inevitabilmente ulteriori funzionalità. Può però risultare strano per l'applicazione uscire dalla propria shell UNIX per effettuare chiamate Win32 e ottenere maggiore potenza da Windows.  
  
L'elenco seguente include le risorse Microsoft e di terze parti per il porting e il supporto della migrazione di UNIX a Visual C++:  
  
### <a name="unix-migration-guides"></a>Guide per la migrazione a UNIX  
La [UNIX Custom Application Migration Guide](https://technet.microsoft.com/library/bb656290.aspx) (Guida per la migrazione di applicazioni personalizzate UNIX) include informazioni tecniche sulla migrazione del codice da UNIX all'ambiente Win32.  
  
La [Unix Migration Project Guide](https://technet.microsoft.com/library/bb656287.aspx) (Guida per i progetti di migrazione UNIX) costituisce un'integrazione della guida per la migrazione di applicazioni personalizzate UNIX e include informazioni di carattere generale sulla migrazione di progetti sostanziali da UNIX a Win32. Fornisce inoltre consigli sugli aspetti da considerare nelle diverse fasi della migrazione dei progetti.
  
### <a name="microsoft-windows-services-for-unix-sfu"></a>Microsoft Windows Services for UNIX (SFU)  
Microsoft Windows Services for UNIX (SFU) offre una gamma completa di servizi multipiattaforma per integrare Windows in ambienti esistenti basati su UNIX. Services for UNIX include condivisione file, amministrazione e accesso remoto, sincronizzazione delle password, gestione delle directory comuni, un set comune di utilità e una shell.  
  
[Servizi Windows per UNIX](http://www.microsoft.com/downloads/details.aspx?FamilyID=896c9688-601b-44f1-81a4-02878ff11778&displaylang=en)  
  
### <a name="interopsystemscom"></a>InteropSystems.com  
[http://www.interopsystems.com/](http://www.interopsystems.com/)  
  
Sito di terze parti di una società che offre software che supporta il porting da UNIX a Win32.  
  
### <a name="c-boost-web-site"></a>Sito Web di C++ Boost  
[http://boost.sourceforge.net/regression-logs/](http://boost.sourceforge.net/regression-logs/)  
  
[http://boost.sourceforge.net/boost-build2/](http://boost.sourceforge.net/boost-build2/)  
  
## <a name="porting-unix-applications-directly-to-win32"></a>Porting di applicazioni UNIX direttamente in Win32  
 
Un'altra opzione consiste nel porting di applicazioni UNIX direttamente in Win32. Se si usano librerie C/C++ ANSI e librerie del compilatore C disponibili in commercio, molte delle tradizionali chiamate di sistema basate su applicazioni UNIX risulteranno disponibili anche in applicazioni Win32.  
  
Non è necessario modificare il modello di output delle applicazioni basate su **stdio** dal momento che le API della console Win32 console simulano il modello **stdio** e sono presenti versioni di *curses* che usano le API della console Win32. Per altre informazioni, vedere [SetConsoleCursorPosition](https://msdn.microsoft.com/library/windows/desktop/ms686025).  
  
Le applicazioni basate su socket Berkeley richiedono solo poche modifiche per funzionare come applicazioni Win32. L'interfaccia Windows Sockets è stata progettata per garantire la portabilità con i socket BSD apportando modifiche minime illustrate nelle sezioni introduttive della specifica WinSock.  
  
Windows supporta RPC compatibile con DCE, di conseguenza si possono facilmente usare le applicazioni basate su RPC. Vedere [Funzioni RPC](/windows/desktop/Rpc/rpc-functions).  
  
Una delle principali differenze tra i due sistemi è data dal modello di processo. In UNIX è presente `fork`, che invece non è presente in Win32. A seconda del modo in cui vengono usati `fork` e la base di codice, è possibile usare due API disponibili in Win32: `CreateProcess` e `CreateThread`. Un'applicazione UNIX che supporta il fork di più copie di se stessa può essere rielaborata in Win32 in modo da includere più processi o un singolo processo a più thread. Se si usano più processi, esistono più metodi di IPC che consentono di comunicare tra i processi ed eventualmente aggiornare il codice e i dati del nuovo processo in modo che siano simili all'elemento padre, se è necessaria la funzionalità offerta da `fork`. Per altre informazioni su IPC, vedere [Comunicazioni tra processi](/windows/desktop/ipc/interprocess-communications).  
  
I modelli grafici di Windows e UNIX sono molto diversi. UNIX usa l'interfaccia grafica utente X Window, mentre Windows usa GDI. Anche se concettualmente simili, non esiste un mapping semplice dell'API X all'API GDI. È però disponibile il supporto OpenGL per la migrazione di applicazioni basate UNIX OpenGL. Esistono inoltre client e server X per Windows. Per informazioni su GDI, vedere [Contesti di dispositivo](https://msdn.microsoft.com/library/windows/desktop/dd183553).  
  
Dovrebbe essere semplice eseguire il porting a Visual C++ in esecuzione in Windows di applicazioni UNIX di base, incluse molte applicazioni CGI. La libreria di runtime di Visual C++ include diverse funzioni, tra cui `open`, `fopen`, `read` e `write`. Inoltre, esiste un mapping uno-a-uno tra le API C UNIX e le API Win32: da `open` a `CreateFile`, da `read` a `ReadFile`, da `write` a `WriteFile`, da `ioctl` a `DeviceIOControl`, da `close` a `CloseFile` e così via.  
  
## <a name="windows-posix-subsystem"></a>Sottosistema Windows POSIX  
 
Un'altra opzione presa in considerazione dai programmatori UNIX è il sottosistema Windows POSIX, che però supporta solo POSIX 1003.1, ovvero l'unica versione di POSIX standardizzata quando è stato creato Windows NT. Da allora non ci sono state molte richieste per estendere questo sottosistema dal momento che la maggior parte delle applicazioni è stata convertita a Win32. Il sistema 1003.1 riveste interesse limitato per le applicazioni complete perché non include numerose funzionalità, come quelle presenti in 1003.2, il supporto di rete e così via. Le applicazioni complete eseguite nel sottosistema POSIX di Windows non hanno accesso alle funzionalità di Windows disponibili per le applicazioni Win32, ad esempio i file mappati alla memoria, la rete e la grafica. Le destinazioni principali del sottosistema Windows POSIX sono le applicazioni quali VI, LS e GREP.  
  
## <a name="see-also"></a>Vedere anche  
 
[Guida al porting e aggiornamento in Visual C++](visual-cpp-change-history-2003-2015.md)   
[UNIX](../c-runtime-library/unix.md)   
[Regole di inferenza](../build/inference-rules.md)