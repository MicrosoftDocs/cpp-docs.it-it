---
title: 'Windows Sockets: Porte e indirizzi Socket | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- ports [MFC], definition
- Windows Sockets [MFC], ports
- Windows Sockets [MFC], addresses
- ports [MFC]
- addresses [MFC], socket
- sockets [MFC], addresses
- sockets [MFC], ports
ms.assetid: e050261a-9285-4f31-a1c5-6c8033af5b4a
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0c7b2e15761815b75ba8001ad4eb5a5c276f5056
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="windows-sockets-ports-and-socket-addresses"></a>Windows Sockets: porte e indirizzi socket
Questo articolo illustra la porta"condizioni" e "address" come utilizzato con i socket di Windows.  
  
##  <a name="_core_port"></a>Porta  
 Una porta identifica un processo univoco per il quale può essere fornito un servizio. In questo contesto, una porta è associata a un'applicazione che supporta Windows Sockets. L'idea consiste nell'identificare in modo univoco ogni applicazione di Windows Sockets si può avere più di un'applicazione Windows Sockets in esecuzione in un computer nello stesso momento.  
  
 Alcune porte sono riservate per i servizi comuni, ad esempio FTP. È consigliabile evitare l'uso di queste porte a meno che non si specifica il tipo di servizio. La specifica Windows Sockets dettagli queste porte riservate. Il file WINSOCK. H anche li elenca.  
  
 Per consentire la DLL di socket di Windows selezionare una porta utilizzabile per l'utente, passare 0 come il valore della porta. MFC consente di selezionare un valore di porta maggiore di 1024 decimale. È possibile recuperare il valore della porta selezionato da MFC chiamando il [CAsyncSocket::GetSockName](../mfc/reference/casyncsocket-class.md#getsockname) funzione membro.  
  
##  <a name="_core_socket_address"></a>Indirizzo del socket  
 Ogni oggetto socket è associata a un indirizzo IP (Internet Protocol) in rete. In genere, l'indirizzo è un nome di computer, ad esempio "ftp.microsoft.com", o un numero di punti, ad esempio "128.56.22.8".  
  
 Quando si cerca di creare un socket, in genere non è necessario specificare il proprio indirizzo.  
  
> [!NOTE]
>  È possibile che il computer ha più schede di rete o l'applicazione debba essere eseguita in un computer di questo tipo, ognuno dei quali rappresenta una rete diversa. In questo caso, si potrebbe essere necessario fornire un indirizzo per specificare la scheda di rete verrà utilizzata dal socket. Ciò è determinato da un utilizzo avanzato e un problema di portabilità possibili.  
  
 Per altre informazioni, vedere:  
  
-   [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: uso di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)  
  
-   [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)

