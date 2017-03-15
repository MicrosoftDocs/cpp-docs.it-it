---
layout: LandingPage
title: Accesso ai dati in Visual C++
translationtype: Human Translation
ms.sourcegitcommit: d4b97ed874b145f9c6d9a9536476243bba0fd1c1
ms.openlocfilehash: bcec6bba72b48c8fc766c2d74dc31d8e47a239f9
ms.lasthandoff: 03/06/2017

---
# <a name="data-access-in-visual-c"></a>Accesso ai dati in Visual C++

Praticamente tutti i prodotti database, SQL e NoSQL, offrono un'interfaccia per applicazioni C++ native. L'interfaccia standard del settore, ODBC, è supportata da tutti i principali prodotti database SQL e da molti prodotti NoSQL. Per altre informazioni su prodotti non Microsoft, rivolgersi al fornitore. Sono disponibili anche librerie di terze parti con varie condizioni di licenza.

Dal 2011 Microsoft si è allineata a ODBC, adottando questa interfaccia come standard per le applicazioni native di connessione ai database Microsoft SQL Server, sia locali che nel cloud. Per altre informazioni, vedere [Programmazione dell'accesso ai dati \(MFC-ATL\)](data-access-programming-mfc-atl.md). Le librerie C++/CLI possono usare i driver ODBC nativi o ADO.NET. Per altre informazioni, vedere [Accesso ai dati tramite ADO.NET (C++/CLI)](/dotnet/data-access-using-adonet-cpp-cli.md) e [Accesso ai dati in Visual Studio](https://docs.microsoft.com/visualstudio/data-tools/accessing-data-in-visual-studio).

<ul class="panelContent cardsF">
<li>
        <a href="/azure/sql-database/sql-database-develop-cplusplus-simple">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/azure/media/index/SQLDatabase.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>Connettersi a un database SQL tramite C e C++</h3>
                        <p>Connettersi a un database SQL di Azure da applicazioni C o C++</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="https://github.com/Azure/azure-storage-cpp">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/azure/media/index/Storage.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>Libreria client di Archiviazione di Microsoft Azure per C++</h3>
                        <p>[Archiviazione di Azure](/azure/storage/storage-introduction) è una soluzione di archiviazione cloud per applicazioni moderne in grado di garantire affidabilità, disponibilità e scalabilità per soddisfare le esigenze dei clienti. Per connettersi ad Archiviazione di Azure da C++ è possibile usare la libreria client di archiviazione di Azure per C++.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="https://blogs.msdn.microsoft.com/sqlnativeclient/2016/08/01/announcing-the-odbc-driver-13-1-for-sql-server/">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/media/common/i_drivers.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>ODBC Driver 13.1 for SQL Server - Windows ora disponibile</h3>
                        <p>Il driver ODBC più recente garantisce accesso stabile ai dati dei database SQL di Microsoft Azure in ambiente Microsoft SQL Server 2016 per le applicazioni basate su C/C++. Offre inoltre il supporto per funzionalità quali Always Encrypted, Azure Active Directory e Gruppi di disponibilità AlwaysOn. Disponibile anche per MacOS e Linux.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="https://msdn.microsoft.com/library/ms130892.aspx">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/media/common/i_api.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>SQL Server Native Client</h3>
                        <p>SQL Server Native Client è un'API (Application Programming Interface) autonoma di accesso ai dati usata sia in OLE DB che in ODBC e supporta SQL Server dalla versione 2005 alla versione 2014. Le nuove applicazioni devono usare il driver ODBC 13.1 per SQL Server.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="/cpp/data/data-access-programming-mfc-atl">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/media/common/i_api.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>Programmazione dell'accesso ai dati</h3>
                        <p>Descrive la programmazione dell'accesso ai dati legacy in Visual C++, dove la modalità consigliata consiste nell'uso di una delle librerie di classi quali la libreria ATL (Active Template Class Library) o la libreria MFC (Microsoft Foundation Class), che semplifica le operazioni con le API di database.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="/cpp/data/odbc/open-database-connectivity-odbc">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/media/common/i_multi-connect.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>Open Database Connectivity (ODBC)</h3>
                        <p>La libreria MFC (Microsoft Foundation Classes) fornisce le classi per la programmazione con ODBC (Open Database Connectivity).</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="/cpp/data/oledb/ole-db-programming">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardImageOuter">
                        <div class="cardImage">
                            <img src="/media/common/i_generic-database.svg" alt="" />
                        </div>
                    </div>
                    <div class="cardText">
                        <h3>Programmazione con OLE DB</h3>
                        <p>Fornisce collegamenti ad argomenti concettuali che illustrano la tecnologia per database OLE DB e la libreria di modelli OLE DB. L'uso di OLE DB è consigliato per le nuove applicazioni solo in scenari che prevedono server collegati.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    
</ul>

---

<h2>Riferimento</h2>

<ul class="panelContent cardsW">
 <li>
        <a href="https://azure.microsoft.com/develop/cpp/">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardText">
                        <h3>Centro per sviluppatori C++ e C di Microsoft Azure</h3>
                        <p>Azure semplifica la creazione di applicazioni C++ garantendo flessibilità, scalabilità e affidabilità maggiori con gli strumenti preferiti.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="https://docs.microsoft.com/azure/storage/storage-c-plus-plus-how-to-use-blobs">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardText">
                        <h3>Come usare Archiviazione BLOB da C++</h3>
                        <p>Archiviazione BLOB di Azure è un servizio che archivia dati non strutturati nel cloud come oggetti/BLOB. Archiviazione BLOB può archiviare qualsiasi tipo di dati di testo o binari, ad esempio un documento, un file multimediale o il programma di installazione di un'applicazione. Il servizio Archiviazione BLOB è detto anche archiviazione di oggetti.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <a href="https://docs.microsoft.com/sql/odbc/reference/odbc-programmer-s-reference">
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardText">
                        <h3>Informazioni di riferimento per programmatori ODBC</h3>
                        <p>L'interfaccia ODBC è progettata per essere usata con il linguaggio di programmazione C. L'uso dell'interfaccia ODBC si estende su tre aree: istruzioni SQL, chiamate di funzione ODBC e programmazione C.</p>
                    </div>
                </div>
            </div>
        </div>
        </a>
    </li>
    <li>
        <div class="cardSize">
            <div class="cardPadding">
                <div class="card">
                    <div class="cardText">
                        <h3><a href="https://www.microsoft.com/download/details.aspx?id=53339" title="Microsoft® ODBC Driver 13.1 for SQL Server® - Windows Download Page">ODBC Driver 13.1 for SQL Server</a></h3>
                    </div>
                </div>
            </div>
        </div>        
    </li>
    
</ul>
